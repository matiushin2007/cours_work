#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *event);
private slots:
    void on_leftButton_clicked();

    void on_rightButton_clicked();

    void on_x3_Button_clicked();

    void on_aboutButton_clicked();

    void on_x4_Button_clicked();

    void on_x5_Button_clicked();

private:
    Ui::MainWindow *ui;
    void setInterfaceStyle();
    void changeButtonStatus(int num);
};
#endif // MAINWINDOW_H
