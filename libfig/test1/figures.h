#ifndef FIGURES_H
#define FIGURES_H

#include "figures_global.h"
#include<QList>

/*class FIGURESSHARED_EXPORT Figures
{

public:
    Figures();
};*/
enum figure_ID { Tri, Sqr, Ckl};
class FIGURESSHARED_EXPORT figure{
    public:
        figure() : p(0) {}
        figure( figure_ID id);
        virtual void info() { p->info(); }
        virtual void set(QList<double> param){ p->set(param); }
        virtual void setXY(double a, double b){p->setXY(a,b); }
        virtual QList<QString> getInfo(){ return p->getInfo(); }
        virtual ~figure() { delete p; p=0; }
    private:
        figure* p;
    };

class FIGURESSHARED_EXPORT figCont{
    QList<figure*> flist;
public:
    void addFig(figure* f, QList<double> param);
    void delFig(int);
    void moveFig(double, double, int);
    void output(QString);
    void input(QString);

};
#endif // FIGURES_H
