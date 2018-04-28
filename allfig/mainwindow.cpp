#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    scene= new QGraphicsScene();
    ui->setupUi(this);
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,1380,800);
    this->setWindowTitle("BOL'");
    connect(ui->figadd,&QPushButton::clicked,this,&MainWindow::addFig);
    connect(ui->figdel,&QPushButton::clicked,this,&MainWindow::delFig);
    connect(ui->comboBox,&QComboBox::currentTextChanged,this,&MainWindow::invis);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&MainWindow::loadFile);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&MainWindow::saveFile);
}

void MainWindow::delFig()
{
    QList<QGraphicsItem*> b = scene->selectedItems();
    for (int i=0; i<b.size(); i++)
    {
        Shape* shapel = (Shape*)b[i];
        scene->removeItem(b[i]);
        a.deleteFigure(shapel);
    }
}

void MainWindow::addFig()
{

    Shape * tmp;
    vector <int> tmp2;
    tmp2.push_back(x);
    tmp2.push_back(y);
    tmp2.push_back(ui->textEdit->toPlainText().toInt());
    tmp2.push_back(ui->textEdit_2->toPlainText().toInt());
    tmp2.push_back(0);
    tmp=new Triangle(tmp2);
    if (ui->comboBox->currentIndex()==0) {
       tmp2.push_back(x);
       tmp2.push_back(y);
       tmp2.push_back(ui->textEdit->toPlainText().toInt());
       tmp2.push_back(ui->textEdit_2->toPlainText().toInt());
       tmp2.push_back(0);
       tmp=new Triangle(tmp2);
       //tmp->sePos(x,y);
       //tmp->setProp,,x,y);
    }
    if (ui->comboBox->currentIndex()==1) {
        tmp2.push_back(x);
        tmp2.push_back(y);
        tmp2.push_back(ui->textEdit->toPlainText().toInt());
        tmp2.push_back(ui->textEdit_2->toPlainText().toInt());
        tmp2.push_back(0);
        tmp=new Rectangle(tmp2);
        //tmp->setProp(ui->textEdit->toPlainText().toInt(),ui->textEdit_2->toPlainText().toInt(),x,y);
    }
    if (ui->comboBox->currentIndex()==2) {
        tmp2.push_back(x);
        tmp2.push_back(y);
        tmp2.push_back(ui->textEdit->toPlainText().toInt());
        tmp2.push_back(ui->textEdit->toPlainText().toInt());
        tmp2.push_back(0);
        tmp=new Circle(tmp2);
        //tmp->setProp(ui->textEdit->toPlainText().toInt(),ui->textEdit->toPlainText().toInt(),x,y);
    }
    tmp->setPos(x,y);
    scene->addItem(tmp);
    a.addFigure(tmp);
}
void MainWindow::invis()
{

    if (ui->comboBox->currentIndex() == 2)
    {
        ui->textEdit_2->setEnabled(false);
        ui->textEdit_2->setVisible(false);
        ui->label_3->setEnabled(false);
        ui->label_3->setVisible(false);
    }
    else
    {
        ui->textEdit_2->setEnabled(true);
        ui->textEdit_2->setVisible(true);
        ui->label_3->setEnabled(true);
        ui->label_3->setVisible(true);
    }
}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    QList<QGraphicsItem*> a = scene->selectedItems();
    if(event->key() == Qt::Key_D )
    {
        for (int i=0; i<a.size(); i++)
        {
            a[i]->setRotation((a[i]->rotation())+5);
        }
    }
    if(event->key() == Qt::Key_A )
    {
        for (int i=0; i<a.size(); i++)
        {
             a[i]->setRotation((a[i]->rotation())-5);
        }
    }
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        QPointF tmp=event->pos();

        x=tmp.x();
        y=tmp.y();
    }
}

void MainWindow::loadFile()
{
   a.loadFile();
   vector<Shape*> rmp=a.returnS();
   for(unsigned int i=0;i<rmp.size();i++)
   {
       vector<int> tmp1=rmp.at(i)->getProperties();
       scene->addItem(rmp.at(i));
       rmp.at(i)->setPos(tmp1.at(0),tmp1.at(1));
   }

}
void MainWindow::saveFile()
{
    a.saveFile();
}

MainWindow::~MainWindow()
{

    delete ui;
}
