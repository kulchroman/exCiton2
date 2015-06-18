 #ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <physics.h>
#include <QMainWindow>
#include <qwt_plot.h>
#include <qwt_plot_grid.h>

#include <qwt_legend.h>

#include <qwt_plot_curve.h>
#include <qwt_symbol.h>

#include <qwt_plot_magnifier.h>

#include <qwt_plot_panner.h>

#include <qwt_plot_picker.h>
#include <qwt_picker_machine.h>
#include "qwt_scale_draw.h"
#include "modeling.h"

//#include "help_file.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    physics *ph;

    
private:
    Ui::MainWindow *ui;
    QwtLegend *leg;
    QwtPlotGrid *grid;
    QwtPlotCurve *curv1,*curv2;

    void showTable();
    void showGraph();

private slots:
    void showTableSlot();
    void showGraphSlot();
    void calculate();
    void modelingSlot();

    void saveFileSlot();
    void openFileSlot();
    void saveFileAsSlot();
    void aboutSlot();

    void upgrade_prog();

   // void helpBrowser();


    //void exit();

};

#endif // MAINWINDOW_H

