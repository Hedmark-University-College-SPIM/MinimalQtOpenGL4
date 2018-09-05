#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QSurface;
class QWidget;
class RenderWindow;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void init();
    void addRenderWindow();
    Ui::MainWindow *ui;

    QWidget *mRenderWindowContainer;
    RenderWindow *mRenderWindowWidget;
};

#endif // MAINWINDOW_H