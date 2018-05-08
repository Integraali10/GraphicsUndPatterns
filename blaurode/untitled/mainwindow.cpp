#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
        scene= new QGraphicsScene();
        ui->setupUi(this);
        this->setWindowTitle("BOL'2");
        ui->graphicsView->setScene(scene);
        ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scene->setSceneRect(10,10,381,381);
}

void MainWindow::mousePressEvent(QMouseEvent *event){

   int x = event->pos().x();
   int y = event->pos().y();
   if(x <= 391 && x >= 10 && y <= 391 && y >= 10){
   if(event->button() == Qt::LeftButton){
        scene->addEllipse(x-10, y-10, 20, 20, QPen(QColor(0,0,255,255)), QBrush(QColor(0,0,255,255)));
   }
   if(event->button() == Qt::RightButton){
        scene->addRect(x-15, y-15, 30, 30, QPen(QColor(255,0,0,255)), QBrush(QColor(255,0,0,255)));
   }
   }

}
MainWindow::~MainWindow(){
    delete ui;
}
