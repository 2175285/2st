#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "dwgobject.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


enum DrawType
{
    DNone,
    DLine,
    DCircle,
    DRectangle,
    DPoint
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    DrawType curDrawType=DNone;

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSaveAs_triggered();

    void on_actionExit_triggered();

    void pointTB_clicked ();
    void lineTB_clicked();
    void cirAct1_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
