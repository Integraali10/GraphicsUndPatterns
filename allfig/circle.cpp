#include "circle.h"

Circle::Circle(vector<int> tmp, QObject *parent):
    QObject(parent)
{
    SetMouse();
    for(unsigned int i=0;i<tmp.size();i++)
    {
      properties.push_back(tmp.at(i));
    }

}
string Circle::Type()
{
    return "Circle";
}

void Circle::setProperties(vector<int> radius)
{

     properties.at(2)=radius.at(0);
}
void Circle::printProperties()
{
    cout << " radius-" << properties.at(2)
         << " x-" << properties.at(0)
         << " y-" << properties.at(1)
         << "angel"<<properties.at(4)
         << " type-" << Type() << endl;
}
Circle::~Circle()
{
    properties.clear();
}
QPainterPath Circle::shape() const
{   QPainterPath a;
    a.addEllipse(-properties.at(2)/2,-properties.at(2)/2,properties.at(2),properties.at(2));
     return a;
}
void Circle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRect a(-properties.at(2)/2,-properties.at(2)/2,properties.at(2),properties.at(2));
    painter->setBrush(Qt::green);
    painter->setPen(pen);
    prepareGeometryChange();
    painter->drawEllipse(a);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
