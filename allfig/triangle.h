#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"
class BOLGSHARED_EXPORT Triangle :public Shape,public QObject
{
public:
    explicit Triangle(vector<int>,QObject *parent = 0);
    string Type();
    void setProperties(vector <int>);
    void printProperties();
    QPainterPath shape() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~Triangle();
};

#endif // TRIANGLE_H
