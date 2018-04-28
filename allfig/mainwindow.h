#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QStandardPaths>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QPainter>
#include <QImage>
#include <QtDebug>
#include <QColor>
#include <QRect>
#include <QTableWidget>
#include <QList>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QMouseEvent>
#include <QtMath>
#include <QTimer>
#include <QFileDialog>
#include <QFile>
#include <QDir>
#include <QThread>
#include "cont.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int row;
    int col;
    Container a;
    int x,y;
    QGraphicsScene *scene;
    explicit MainWindow(QWidget *parent = 0);
    void invis();
    void printFigure();
    void addFig();
    void delFig();
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void loadFile();
    void saveFile();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
