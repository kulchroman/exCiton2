
#ifndef MODELING_H
#define MODELING_H
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QWidget>

class modeling : public QWidget
{
    Q_OBJECT
private:
    QPainter *p;
    int x,y;
    QSize sz;
protected:
    virtual void paintEvent(QPaintEvent *ev)
       {
         p = new QPainter(this);
         p->setPen(QPen(Qt::red, 1, Qt::SolidLine, Qt::RoundCap));
         p->setBrush(QBrush(Qt::white, Qt::SolidPattern));
         p->drawRect(30,30,x-60,y-60);
         p->setPen(QPen(Qt::green, 1, Qt::SolidLine, Qt::RoundCap));
         p->setBrush(QBrush(Qt::green, Qt::SolidPattern));
         p->drawEllipse(x/2 ,y-40,10,10);
         p->end();
      }

public:
    explicit modeling(QWidget *parent = 0);
    void updateHistogram(int xValue, int yValue);
    ~modeling();


};

#endif // MODELING_H
