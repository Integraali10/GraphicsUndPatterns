#ifndef CONT_H
#define CONT_H

#include "cont_global.h"
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"


class BOLGSHARED_EXPORT Container
{
    vector<Shape*> shapes;
public:
    vector<Shape*> returnS();
    unsigned int size();
    void addFigure(Shape *);
    void deleteFigure(Shape *);
    void moveToNewXY(int, int, int);
    void setProperties(int,vector <int>);
    void saveFile();
    void loadFile();
    void printShapes();
};

#endif // CONT_H
