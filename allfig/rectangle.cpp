#include "rectangle.h"
Rectangle::Rectangle(vector<int> tmp,QObject *parent) :
    QObject(parent)
{
    SetMouse();
    for(unsigned int i=0;i<tmp.size();i++)
    {
      properties.push_back(tmp.at(i));
    }
    setRotation(properties.at(4));
}

string Rectangle::Type()
{
    return "Rectangle";
}

void Rectangle::setProperties(vector<int> a)
{

    properties.at(2)=a.at(0);  properties.at(3)=a.at(1);
}
void Rectangle::printProperties()
{

    cout << " width-" << properties.at(2)
         << " height-" << properties.at(3)
         << " x-" << properties.at(0)
         << " y-" << properties.at(1)
         << "angel"<<properties.at(4)
         << " type-" << Type() << endl;
}
Rectangle::~Rectangle()
{
    properties.clear();
}
void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    QRect a(-properties.at(2)/2,-properties.at(3)/2,properties.at(2),properties.at(3));
    painter->setBrush(Qt::blue);
    painter->setPen(pen);
    prepareGeometryChange();
    painter->drawRect(a);
    Q_UNUSED(option);
    Q_UNUSED(widget);

}
