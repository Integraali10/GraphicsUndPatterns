#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class BOLGSHARED_EXPORT Rectangle :public Shape,public QObject
{
public:
    explicit Rectangle(vector<int>,QObject *parent = 0);
    string Type();
    void setProperties(vector <int>);
    void printProperties();
    ~Rectangle();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // RECTANGLE_H
