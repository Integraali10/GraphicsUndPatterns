#include "triangle.h"
Triangle::Triangle(vector<int> tmp,QObject *parent):
    QObject(parent)
{
    SetMouse();
    for(unsigned int i=0;i<tmp.size();i++)
    {
      properties.push_back(tmp.at(i));
    }
    setRotation(properties.at(4));
}
string Triangle::Type()
{
    return "Triangle";
}

void Triangle::setProperties(vector<int> a)
{
     properties.at(2)=a.at(0);
     properties.at(3)=a.at(1);
}
void Triangle::printProperties()
{

    cout << " width-" << properties.at(2)
         << " height-" << properties.at(3)
         << " x-" << properties.at(0)
         << " y-" << properties.at(1)
         << "angel"<<properties.at(4)
         << " type-" << Type() << endl;
}
Triangle::~Triangle()
{
   properties.clear();
}
QPainterPath Triangle::shape() const
{   QPainterPath a;
    a.moveTo(-properties.at(2)/2,-properties.at(3)/2);
    a.lineTo(properties.at(2)/2,0);
    a.lineTo(-properties.at(2)/2,properties.at(3)/2);
    return a;
}

void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        QPolygon polygon;
        polygon << QPoint(-properties.at(2)/2,-properties.at(3)/2)
                << QPoint(properties.at(2)/2,0)
                << QPoint(-properties.at(2)/2,properties.at(3)/2);
        painter->setBrush(Qt::red);
        painter->setPen(pen);
        prepareGeometryChange();
        painter->drawPolygon(polygon);
        Q_UNUSED(option);
        Q_UNUSED(widget);
}
