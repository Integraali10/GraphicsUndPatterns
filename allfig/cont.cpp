#include "cont.h"

vector<Shape*> Container::returnS()
{
    return shapes;
}
unsigned int Container::size()
{
    return shapes.size();
}
void Container::addFigure(Shape * newFigure)
{
    shapes.push_back(newFigure);
}
void Container::deleteFigure(Shape * dellFig)
{
   std::vector<Shape*>::iterator it;
   for (unsigned int i=0; i<shapes.size();i++)
   {
       vector<int>o = shapes[i]->getProperties();
       vector<int>d = dellFig->getProperties();
       //if ( std::equal (o.begin(), o.end(), d.begin()))
       if (o==d)
        it = shapes.begin()+i;
   }
   delete *it;
   shapes.erase(it);
}
void Container::moveToNewXY(int newX, int newY, int i)
{
    shapes.at(i)->offsetToNewXY(newX, newY);
}
void Container::setProperties(int i,vector <int> a)
{
    shapes.at(i)->setProperties(a);
}
void Container::saveFile()
{
    ofstream file("output.txt");
    if (file.is_open())
    {
        for (unsigned int i = 0; i < shapes.size(); i++)
        {
            shapes.at(i)->setAngel();
            vector<int> tmp = shapes.at(i)->getProperties();

            //cout<< shapes.at(i)->Type()[0]<<endl;
            file << shapes.at(i)->Type()[0]<<endl;
            for (unsigned int j = 0; j < tmp.size(); j++)
            {
                //cout<< tmp.at(j) << endl;
                file << tmp.at(j) << endl;
            }
        }
        cout<<"file successfully saved\n";
    }

    file.close();
}
void Container::loadFile()
{
    ifstream file("output.txt");
    if (file.is_open())
    {
        while (true) {
            if (file.eof()) { break; }
            else{

            char tmp;
            file >> tmp;
            if (!file.good())
                break;
            Shape *figure;
            vector<int> properties;
            for(int i=0;i<5;i++)
            {
                int a;
                file >>a;
                properties.push_back(a);
            }
            switch (tmp)
            {
            case 'R':{
                figure = new Rectangle(properties);

                break; }
            case 'T':{
                figure = new Triangle(properties);
                break; }
            case 'C':{
                figure = new Circle(properties);
                break; }
            }
            figure->setPos(properties.at(0),properties.at(1));
            shapes.push_back(figure);}
        }
         cout<<"file successfully load\n";
    }
    file.close();
}
void Container::printShapes()
{
    for (unsigned int i = 0; i < shapes.size(); i++)
        shapes.at(i)->printProperties();
}

