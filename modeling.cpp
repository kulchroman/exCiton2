#include "modeling.h"

modeling::modeling(QWidget *parent) : QWidget(parent)
{

    sz = size();
    x = sz.width();
    y = sz.height();
}

void modeling::updateHistogram(int xValue, int yValue)
{

   x = xValue;
   y = yValue;

}

modeling::~modeling()
{

}

