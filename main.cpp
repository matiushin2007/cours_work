#include "mainwindow.h" // Подключение заголовочного файла главного окна

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // Создание объекта QApplication
    MainWindow w;
    w.show(); // Отображение главного окна на экране
    return a.exec(); // Запуск основного цикла обработки событий
}
