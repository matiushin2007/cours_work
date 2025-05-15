#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "gameboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// Класс основного окна игры
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // Конструктор и деструктор
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

protected:

    void paintEvent(QPaintEvent *event) override; //Отрисовка фона окна

private slots:


    // Выбор символа игрока (X или 0)
    void on_leftButton_clicked();
    void on_rightButton_clicked();

    // Переключение между размерами игрового поля
    void on_x3_Button_clicked();
    void on_x4_Button_clicked();
    void on_x5_Button_clicked();

    // Кнопка «Играть / Сдаться / Играть заново»
    void on_startButton_clicked();

    // Переход во вкладку «Об игре»
    void on_aboutButton_clicked();       //Слоты для кнопок пользования

    // Клик по клетке на игровом поле
    void onGameAreaButtonClicked();

    // Слот, вызываемый таймером для хода компьютера
    void onComputerSlot();

private:


    enum BoardSize { Three = 3, Four = 4, Five = 5 }; //Все размеры поля

    Ui::MainWindow *ui;               // Интерфейс в qt дизайнере

    BoardSize currentSize { Three }; // Текущий выбранный размер поля

    // Игровые поля для каждого размера
    GameBoard<3> board3;
    GameBoard<4> board4;
    GameBoard<5> board5;

    QTimer *timer { nullptr };       // Таймер для задержки хода компьютера
    char player { 'X' };             // Символ игрока ('X' или '0')
    bool playerLocked { false };     // Блокировка ввода, пока ходит компьютер
    bool gameInProgress = false;     // Флаг процесса игры

    // Подсветка результата игры (победа/поражение/ничья)
    void highlightWinner(char winner);

    // Настройка игрового поля нужного размера
    void configureBoard(BoardSize size);

    // Установка пустого внешнего вида для всех кнопок
    void setBlankStyle(BoardSize size);

    // Смена стиля одной кнопки
    void changeButtonStyle(QWidget *tab, int r, int c, const QString &style);

    // Начало новой игры (сброс поля)
    void start();

    // Ход компьютера
    void computerMove();

    // Проверка конца игры
    void endGame();
};

#endif // MAINWINDOW_H
