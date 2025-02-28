#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE                            //Создание окна приложения с возможностью кастомной отрисовки интерфейса

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

    void on_x3_Button_clicked(); //Функции нажатия на созданные кнопки в пользовательском меню

    void on_aboutButton_clicked();

    void on_x4_Button_clicked();

    void on_x5_Button_clicked();

private:
    Ui::MainWindow *ui;
    void setInterfaceStyle(); //Функция для реализации созданных стилей в файле stylehelper.cpp
    void changeButtonStatus(int num); //Выбор знака, за который пользователь будет играть (крест или ноль)
};
#endif // MAINWINDOW_H
