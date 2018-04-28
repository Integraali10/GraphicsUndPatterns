#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include "cont_global.h"
using namespace std;
class BOLGSHARED_EXPORT Shape:public QGraphicsItem
{
protected:
   QPen pen;
   vector<int> properties;
public:
    void offsetToNewXY(int, int);
    void setXY(int x, int y);
    vector<int> getProperties();
    virtual string Type() = 0;
    virtual void setProperties(vector <int>) = 0;
    virtual void printProperties() = 0;
    void SetMouse();
    void setAngel();
    QRectF boundingRect() const;
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    virtual ~Shape(){};
};

#endif // SHAPE_H
