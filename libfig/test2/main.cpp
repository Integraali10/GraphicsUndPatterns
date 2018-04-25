#include <QCoreApplication>
#include "figures.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    figCont f;
    f.input("out.txt");
    f.output("out2.txt");
    //qDebug() << f.size();
    f.moveFig(3,4,1);
    f.moveFig(4,5,0);

    return a.exec();
}
