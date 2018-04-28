#include <QCoreApplication>
#include "cont.h"
using namespace std;

void check()
{
    int x, y,height,weight,angel;
    char type;
    Container a;
    while (true)
    {
        cout << "1 - add 0 -  no\n";
        int i = 0;
        cin >> i;
        if (i == 0)
            break;
        Shape *figure = NULL;
        cout << "Figure C - Circle R - Rectangle T - Triangle \n";
        cin >> type;

        vector <int> tmp2;
        switch (type)
        {
        case 'C':{cout << "x:"; cin >> x;
                  cout << "y:"; cin >> y;
                  cout << "radius:"; cin >> height;
                  cout << "angel:"; cin >> angel;
                  tmp2.push_back(x);
                  tmp2.push_back(y);
                  tmp2.push_back(height);
                  tmp2.push_back(height);
                  tmp2.push_back(angel);
                  figure = new Circle(tmp2);
                  a.addFigure(figure);
                  break;
        }
        case 'R':{cout << "x:"; cin >> x;
                  cout << "y:"; cin >> y;
                  cout << "width:"; cin >> weight;
                  cout << "height:"; cin >> height;
                  cout << "angel:"; cin >> angel;
                  tmp2.push_back(x);
                  tmp2.push_back(y);
                  tmp2.push_back(weight);
                  tmp2.push_back(height);
                  tmp2.push_back(angel);
                  figure = new Rectangle(tmp2);
                  a.addFigure(figure);
                  break;
        }
        case 'T':{cout << "x:"; cin >> x;
                  cout << "y:"; cin >> y;
                  cout << "width:"; cin >> weight;
                   cout << "height:"; cin >> height;
                  cout << "angel:"; cin >> angel;
                  tmp2.push_back(x);
                  tmp2.push_back(y);
                  tmp2.push_back(weight);
                  tmp2.push_back(height);
                  tmp2.push_back(angel);
                  figure = new Triangle(tmp2);
                  a.addFigure(figure);
                  break;
        }
        default:
            break;
        }

    }
    a.saveFile();
}

int main()
{
    check();
    return 0;
}
