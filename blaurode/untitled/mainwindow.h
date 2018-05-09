#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QMainWindow>
#include <QMouseEvent>
#include <QResizeEvent>
#include <QGraphicsView>
#include <QDebug>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QGraphicsScene *scene;
    void mousePressEvent(QMouseEvent *event);
    void resizeEvent(QResizeEvent *);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
