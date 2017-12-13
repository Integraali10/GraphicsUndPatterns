#include <QCoreApplication>
#include "figures.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    figCont f;
    f.addFig(Ckl, {3, 4, 8});
    f.addFig(Sqr, {5, 7, 8});
    f.addFig(Tri, {3, 4, 7, 8});
    f.output("/Users/ekaterinakuzkina/test1/out.txt");
    return a.exec();
}
