#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QtCore/QCoreApplication>
#include <QPushButton>
#include <QTableWidget>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include "physics.h"

#include <QPainter>
#include <QPixmap>
#include <QPoint>

int tableCount =0;// кількість таблиць
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->CheckCristal->addItem("CsI");
    QDir recoredDir("/home/roman/Desktop/exCiton_v0.3/config");
    QStringList allFiles = recoredDir.entryList(QDir::NoDotAndDotDot | QDir::System | QDir::Hidden  | QDir::AllDirs | QDir::Files, QDir::DirsFirst);
    for (int i=0;i<allFiles.size();i++)
    {
        if (allFiles[i]!="CsI")
            ui->CheckCristal->addItem(allFiles[i]);
    }
    //ui->CheckCristal->addItem("CsBr");
    ui->CheckIntegral->addItem("Сімпсона");
    ui->CheckIntegral->addItem("Монте-Карло");
    ui->CheckLow->addItem("Номральний");
    ui->CheckLow->addItem("Рівномірний");

    //екземпляр класу
    ph=new physics;

    //записуємо дефолтні значення
    ui->eps_0->setText(QString::number(ph->epsin_low));
    ui->eps_nesk->setText(QString::number(ph->epsin_high));
    //ui->chastota_fonona->setText(QString::number(ph.hw));
    ui->obl_localizacii->setText(QString::number(ph->a));
    ui->kut->setText(QString::number(ph->teta));
    ui->napr_polia->setText(QString::number(ph->field));
    ui->koef_elektr_sporidn->setText(QString::number(ph->xi));
    ui->E_fonona->setText(QString::number(ph->hw));
    ui->n_iter->setText(QString::number(ph->iteration));
    ui->temperatura->setText(QString::number(ph->T));

    /*     конектимо сигнали зі слотами         */
    //створити нове вікно з графіком
    connect (ui->showGraph,SIGNAL(clicked()),this,SLOT(calculate()));
    connect (ui->showGraph,SIGNAL(clicked()),this,SLOT(showGraphSlot()));

    //створити нове вікно з таблицею
    connect (ui->showTable,SIGNAL(clicked()),this,SLOT(calculate()));
    connect (ui->showTable,SIGNAL(clicked()),this,SLOT(showTableSlot()));

    //рандомний кут
    connect (ui->chRandomAngle,SIGNAL(clicked(bool)),ui->kut,SLOT(setDisabled(bool)));

    /*        меню            */
    //відкрити файл
    connect (ui->ev_open,SIGNAL(triggered()),this,SLOT(openFileSlot()));
    //зберегти файл
    connect (ui->ev_save,SIGNAL(triggered()),this,SLOT(saveFileSlot()));
    //зберегти файл як
    connect (ui->ev_saveAs,SIGNAL(triggered()),this,SLOT(saveFileAsSlot()));
    //про програму
    connect (ui->ev_about,SIGNAL(triggered()),this,SLOT(aboutSlot()));

    //моделювання
    connect (ui->b_modeling,SIGNAL(clicked()),this,SLOT(modelingSlot()));

    //справка
   // connect(ui->ev_manual,SIGNAL(triggered()),this,SLOT(helpBrowser()));

    //оновити
    connect (ui->upgrade,SIGNAL(triggered(bool)),this,SLOT(upgrade_prog()));
    //вихід
    connect (ui->ev_exit,SIGNAL(triggered()),this,SLOT(close()));


}

void MainWindow::calculate()
{
    ph->epsin_low = ui->eps_0->text().toDouble();
    ph->epsin_high = ui->eps_nesk->text().toDouble();
    //ui->chastota_fonona->setText(QString::number(ph.hw));
    ph->a=ui->obl_localizacii->text().toDouble();
    ph->teta = ui->kut->text().toDouble();
    ph->field=ui->napr_polia->text().toDouble();
    ph->xi=ui->koef_elektr_sporidn->text().toDouble();
    ph->hw = ui->E_fonona->text().toDouble();
    ph->iteration=ui->n_iter->text().toInt();
    ph->T=ui->temperatura->text().toDouble();

    if (ui->chRandomAngle->isChecked())
    {
       // ph->teta=random();
    }

    ph->energy();
}

void MainWindow::modelingSlot()
{
    modeling *m=new modeling();
    m->show();


}
void MainWindow::saveFileSlot()
{
    QString filename = QFileDialog::getSaveFileName();
    QFile myFile(filename);
    if (!myFile.open(QFile::WriteOnly | QFile::Text))

    {
         QMessageBox::information(0, "Помилка", "Помилка при збереженні у  файл");
         return;

    }
    //провірка пройдена
    QTextStream myText(&myFile);
    myText << "Hello world!"<<endl;
    myText << ui->eps_0->text()<<endl;
    myText << ui->eps_nesk->text()<<endl;
    //ui->chastota_fonona->setText(QString::number(ph.hw));
    myText <<ui->obl_localizacii->text()<<endl;
    myText << ui->kut->text()<<endl;
    myText <<ui->napr_polia->text()<<endl;
    myText <<ui->koef_elektr_sporidn->text()<<endl;
    myText <<ui->E_fonona->text()<<endl;
    myText <<ui->n_iter->text()<<endl;
    myText <<ui->temperatura->text()<<endl;


    myFile.flush();
    myFile.close();

}

void MainWindow::openFileSlot()
{
    //можна добавити фільтри
    //QString fileFilters;

    QString fileName = QFileDialog::getOpenFileName();
    if (fileName.isEmpty())
        QMessageBox::information(0, "Помилка", "Помилка при відкритті фалу");

}

void MainWindow::saveFileAsSlot()
{

}

void MainWindow::aboutSlot()
{
   QMessageBox::about(0,"exCiton","<h1> <i> <font color='#E0FFFF'> <p  align='center'>Програма розроблена студентом"
                                  " "
                                  "<br > Кульчицьким Р.О. <\br> "
                                  "  "
                                  "  "
                                  " <br>Під керівництвом доцента кафедри фізики твердого тіла<\br> "
                                  "  "
                                  "  "
                                  " <br>Тузяк О.Я.<\p><\br> <\font><\i><\h1>");
}

void MainWindow::upgrade_prog()
{
    QMessageBox::about(0,"exCiton","Відсутнє інтернет зєднання");
}

/*void MainWindow::helpBrowser()
{

}
*/

void MainWindow::showTableSlot()
{
    int column;
    tableCount++;

    //"Таблиця" + QString::number(tableCount)
    QTableWidget *w = new QTableWidget();
    w->setGeometry(QRect(0,0,300,900));
    w->setFrameStyle(QFrame::NoFrame);
    w->setRowCount(ph->n);
    w->setColumnCount(2);

    for(int row = 0; row < w->rowCount(); row++)
    {
      //for(int column = 0; column < w->columnCount(); column++)
      //{

          QTableWidgetItem *item = new QTableWidgetItem ();
          column=0;
          item->setText(QString::number(ph->E_for_table[row]));
          w->setItem(row,column,item);
          item = new QTableWidgetItem ();
          column = 1;
          item->setText(QString::number(ph->rez[row]));
          w->setItem(row,column,item);

     // }
    }
   w->show();

}

void MainWindow::showGraphSlot()
{
    QwtPlot *plot=new QwtPlot();
    plot->setTitle( "Графік залежності інтегральної смуги від дози опромінення" );
    plot->setCanvasBackground( Qt::white );
    //написати функцію пошуку максимуму (!!!)
    double maxY=ph->rez[0];
    for(int i = 1; i < ph->n; i++)
    {
        if (ph->rez[i]>maxY) maxY=ph->rez[i];
    }

    plot->setAxisScale( QwtPlot::yLeft, 0, maxY );
    plot->setAxisScale( QwtPlot::xBottom, 0, 1.5 );
    //налаштування масштабування графіку
    QwtPlotMagnifier *magnifier = new QwtPlotMagnifier(plot->canvas());
    magnifier->setMouseButton(Qt::MidButton);
    QwtPlotPanner *d_panner = new QwtPlotPanner( plot->canvas() );
    d_panner->setMouseButton( Qt::RightButton );

    //реалізуємо показ координат при зажиманні лкм
    QwtPlotPicker *d_picker =
                new QwtPlotPicker(
                    QwtPlot::xBottom, QwtPlot::yLeft,
        QwtPlotPicker::CrossRubberBand,
        QwtPicker::ActiveOnly,
        plot->canvas() );
        d_picker->setRubberBandPen( QColor( Qt::red ) );
        d_picker->setTrackerPen( QColor( Qt::black ) );
        d_picker->setStateMachine( new QwtPickerDragPointMachine() );


    plot->insertLegend( new QwtLegend() );

    QwtPlotGrid *grid = new QwtPlotGrid();
    grid->attach( plot );

    QwtPlotCurve *curve = new QwtPlotCurve();
   // curve->setTitle( "Графік залежності інтегральної смуги від дози опромінення" );
    curve->setPen( Qt::blue, 4 ),
    curve->setRenderHint( QwtPlotItem::RenderAntialiased, true );

    QwtSymbol *symbol = new QwtSymbol( QwtSymbol::Ellipse,
        QBrush( Qt::yellow ), QPen( Qt::red, 2 ), QSize( 8, 8) );
    curve->setSymbol( symbol );

    QPolygonF points;
    for(int row = 0; row < ph->n; row++)
    {
        points << QPointF( ph->E_for_table[row], ph->rez[row] ) ;
    }
    curve->setSamples( points );

    curve->attach( plot );

    plot->resize( 1000, 600 );
    plot->setFocus();
    plot->show();

}



MainWindow::~MainWindow()
{

    free(ph->rez);
    delete (ph->E_for_table);
    delete ui;

}

