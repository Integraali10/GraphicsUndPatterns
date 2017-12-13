#include <QCoreApplication>
#include "figures.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    figCont f;
    f.input("/Users/ekaterinakuzkina/test1/out.txt");
    f.moveFig(3,4,1);
    f.moveFig(4,5,0);
    f.output("/Users/ekaterinakuzkina/test2/out.txt");
    return a.exec();
}
