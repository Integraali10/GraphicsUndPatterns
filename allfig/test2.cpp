#include <QCoreApplication>
#include "cont.h"
using namespace std;
void check()
{
    Container a;
    a.loadFile();
    cout<<"Opened\n";
    a.printShapes();
    cout<<"Deleted id=1\n";
    a.deleteFigure(a.returnS().at(1));
    a.printShapes();
    vector<int> tmp;
    tmp.push_back(0);
    tmp.push_back(1);
    cout<<"Set new data to fig id=1\n";
    a.setProperties(1, tmp);
    a.printShapes();
}

int main()
{
    check();
    return 0;
}
