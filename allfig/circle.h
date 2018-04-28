#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class BOLGSHARED_EXPORT Circle :public Shape,public QObject
{
public:
    explicit Circle(vector<int>,QObject *parent = 0);
    string Type();
    void setProperties(vector <int>);
    void printProperties();
    QPainterPath shape() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~Circle();
};
#endif // CIRCLE_H
