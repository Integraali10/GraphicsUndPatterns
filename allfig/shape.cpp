#include "shape.h"

void Shape::offsetToNewXY(int x, int y)
{
    properties.at(0) += x;
    properties.at(1) += y;
}
void Shape::setXY(int x, int y)
{

     properties.at(0)=x ;
     properties.at(1)=y;
}
vector<int> Shape::getProperties()
{
    return properties;
}
QRectF Shape::boundingRect() const
{
    return QRectF(-properties.at(2)/2,
                  -properties.at(3)/2,
                  properties.at(2),
                  properties.at(3));
}
void Shape::setAngel()
{
    properties.at(4)=rotation();
}

void Shape::SetMouse()
{

    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemIsSelectable, true);
    setFlag(QGraphicsItem::ItemIsFocusable,true);
}
void Shape::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

    this->setPos(mapToScene(event->pos()));
    QPointF point = this->pos();
    this->properties.at(0)= point.x();
    this->properties.at(1) = point.y();
}

void Shape::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    if(event->button() == Qt::RightButton)
    {
        if(isSelected())
        {
            pen.setColor(Qt::black);
            pen.setWidth(1);
            this->setSelected(false);
        }
        else
        {

            pen.setColor(Qt::gray);
            pen.setWidth(3);
            this->setFlag(ItemIsSelectable, true);
            this->setSelected(true);
        }
    }
}
