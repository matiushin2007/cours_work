#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stylehelper.h"

#include <QGridLayout>
#include <QPushButton>
#include <QStyleOption>
#include <QPainter>
#include <cstdlib>
#include <ctime>

using namespace std;  //Для rand()


MainWindow::MainWindow(QWidget *parent) //Конструктор
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this); //Настройка интерфейса из .ui файла

    ui->messageLabel->setText("");  //Пусто по умолчанию
    ui->messageLabel->setStyleSheet(StyleHelper::getNormalMessageStyle());


    this->setStyleSheet(StyleHelper::getMainWidgetStyle());

    ui->aboutTextLabel->setStyleSheet(
        "QLabel { color: white; font-size: 16px; font-family: 'Segoe UI', sans-serif; }"
        );


    ui->aboutButton->setEnabled(true);  //На всякий случай
    ui->aboutButton->setStyleSheet(StyleHelper::getStartButtonsStyle());

    ui->startButton->setStyleSheet(StyleHelper::getStartButtonsStyle());
    ui->x3_Button->setStyleSheet(StyleHelper::getGameButtonsStyle());
    ui->x4_Button->setStyleSheet(StyleHelper::getGameButtonsStyle());
    ui->x5_Button->setStyleSheet(StyleHelper::getGameButtonsStyle());
    ui->leftButton->setStyleSheet(StyleHelper::getLeftButtonActiveStyle());
    ui->rightButton->setStyleSheet(StyleHelper::getRightButtonsStyle());
    ui->messageLabel->setStyleSheet(StyleHelper::getNormalMessageStyle());


    ui->tabWidget->tabBar()->hide(); //Скрыть вкладки, оставить только наши кнопки
    ui->tabWidget->setMaximumHeight(320);

    ui->tabWidget->setCurrentIndex(0);


    //Подгтовка полей
    configureBoard(Three);
    configureBoard(Four);
    configureBoard(Five);

    //Очистка всех полей
    setBlankStyle(Three);
    setBlankStyle(Four);
    setBlankStyle(Five);


    timer = new QTimer(this); //Таймер нужен для имитации размышления ИИ

    connect(timer, &QTimer::timeout, this, &MainWindow::onComputerSlot);

    std::srand(static_cast<unsigned>(std::time(nullptr))); //Генератор случайных чисел
}

MainWindow::~MainWindow() //Освобождаем память, занятую интерфейсом
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *e) //Перекраска фонового виджета
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(e);
}

//Выбор размера поля
void MainWindow::on_x3_Button_clicked()
{
    if (!gameInProgress) {
        ui->tabWidget->setCurrentIndex(0);
        currentSize = Three;
    }
}
void MainWindow::on_x4_Button_clicked()
{
    if (!gameInProgress) {
        ui->tabWidget->setCurrentIndex(1);
        currentSize = Four;
    }
}
void MainWindow::on_x5_Button_clicked()
{
    if (!gameInProgress) {
        ui->tabWidget->setCurrentIndex(2);
        currentSize = Five;
    }
}

void MainWindow::on_aboutButton_clicked() //При нажатие на кнопку об игре
{
    ui->tabWidget->setCurrentIndex(3);
}



void MainWindow::on_leftButton_clicked() //Выбор для игры крестом
{
    if (!gameInProgress) {
        player = 'X';
        ui->leftButton->setStyleSheet(StyleHelper::getLeftButtonActiveStyle());
        ui->rightButton->setStyleSheet(StyleHelper::getRightButtonsStyle());
    }
}

void MainWindow::on_rightButton_clicked() //Выбор для игры ноликом
{
    if (!gameInProgress) {
        player = '0';
        ui->rightButton->setStyleSheet(StyleHelper::getRightButtonActiveStyle());
        ui->leftButton->setStyleSheet(StyleHelper::getLeftButtonsStyle());
    }
}



void MainWindow::configureBoard(BoardSize sz) //Установка параметров ячеек
{
    QWidget *tab = (sz==Three)?ui->tab   : //Получаем соответствующий tab
                       (sz==Four )?ui->tab_3 : ui->tab_4;
    auto *grid   = qobject_cast<QGridLayout*>(tab->layout());
    int n=int(sz);

    for(int r=0;r<n;++r)
        for(int c=0;c<n;++c)
        {
            auto *btn = qobject_cast<QPushButton*>(grid->itemAtPosition(r,c)->widget());
            btn->setProperty("row",    r); //Сохраняем координаты
            btn->setProperty("column", c);
            connect(btn,&QPushButton::clicked,
                    this,&MainWindow::onGameAreaButtonClicked,
                    Qt::UniqueConnection);
        }
}

void MainWindow::setBlankStyle(BoardSize sz) //Очистка кнопок
{
    QWidget *tab = (sz==Three)?ui->tab   : //Установка пустого стиля для всех кнопок выбранного поля
                       (sz==Four )?ui->tab_3 : ui->tab_4;
    auto *grid   = qobject_cast<QGridLayout*>(tab->layout());
    QString st   = StyleHelper::getBlankButtonStyle();
    int n=int(sz);

    for(int r=0;r<n;++r)
        for(int c=0;c<n;++c)
            qobject_cast<QPushButton*>(grid->itemAtPosition(r,c)->widget())
                ->setStyleSheet(st);
}

inline void MainWindow::changeButtonStyle(QWidget *tab, int r, int c, const QString &st)
{
    auto *g = qobject_cast<QGridLayout*>(tab->layout());  //Приводим layout вкладки к сетке (QGridLayout)
    qobject_cast<QPushButton*>(g->itemAtPosition(r, c)->widget())  //Получаем кнопку по координатам
        ->setStyleSheet(st);  //Применяем переданный стиль к кнопке
}


void MainWindow::on_startButton_clicked() //Старт новой партии
{
    if (ui->tabWidget->currentIndex() == 3) return; //Если открыта вкладка "Об игре" — не начинаем игру

    if (gameInProgress) {
        //Когда игрок сдался
        timer->stop();
        playerLocked = true;
        gameInProgress = false;

        ui->messageLabel->setText("Вы сдались");
        ui->messageLabel->setStyleSheet(StyleHelper::getLostMessageStyle());

        highlightWinner((player == 'X') ? '0' : 'X');

        // Разблокируем все кнопки
        ui->startButton->setText("Играть заново");
        ui->startButton->setEnabled(true);
        ui->leftButton->setEnabled(true);
        ui->rightButton->setEnabled(true);
        ui->x3_Button->setEnabled(true);
        ui->x4_Button->setEnabled(true);
        ui->x5_Button->setEnabled(true);
        ui->aboutButton->setEnabled(true);

        return;
    }

    //Начало новой игры
    switch(currentSize){
    case Three: board3.reset(); break;
    case Four:  board4.reset(); break;
    case Five:  board5.reset(); break;
    }

    setBlankStyle(Three); //Очищаем поля
    setBlankStyle(Four);
    setBlankStyle(Five);

    playerLocked = false;
    gameInProgress = true;

    //Блокируем все ненужные кнопки в течение игры
    ui->x3_Button->setDisabled(true);
    ui->x4_Button->setDisabled(true);
    ui->x5_Button->setDisabled(true);
    ui->leftButton->setDisabled(true);
    ui->rightButton->setDisabled(true);
    ui->aboutButton->setDisabled(true);  //Запрещаем кнопку «Об игре»

    ui->startButton->setText("Сдаться");

    ui->messageLabel->setStyleSheet(StyleHelper::getNormalMessageStyle()); //Устанавливаем нейтральный внешний вид для текста сообщения
    ui->messageLabel->setText("Ваш ход");
}



void MainWindow::start() //Начинаем новую игру
{
    switch(currentSize){
    case Three: board3.reset(); break; //Очищаем игровое поле в зависимости от выбранного рязмера
    case Four:  board4.reset(); break;
    case Five:  board5.reset(); break;
    }

    setBlankStyle(currentSize); //Нужное поле очищаем
    playerLocked = false;

    ui->leftButton->setDisabled(true);   // блокируем выбор после старта
    ui->rightButton->setDisabled(true);
    ui->startButton->setDisabled(true);  // блокируем повторный старт

    ui->messageLabel->setStyleSheet(StyleHelper::getNormalMessageStyle()); //Выводим нейтральное сообщение: начинается игра, и сейчас ходит игрок
    ui->messageLabel->setText("Ваш ход");
}


void MainWindow::onGameAreaButtonClicked() // Клик игрока по клетке
{
    if (playerLocked || !gameInProgress) return; //Если сейчас не игрок должен ходить или игра не началась — ничего не делаем

    //Получаем кнопку, по которой кликнули, и координаты её позиции в сетке
    auto *btn = qobject_cast<QPushButton*>(sender());
    int r = btn->property("row").toInt();
    int c = btn->property("column").toInt();

    //Получаем нужный стиль крестика или нолика в зависимости от размера поля
    int size = static_cast<int>(currentSize);
    QString cross = StyleHelper::getCrossStyleForSize(size);
    QString zero  = StyleHelper::getZeroStyleForSize(size);
    const QString st = (player == 'X') ? cross : zero; //Выбор стиля в зависимости от игрока

    bool ok = false;// Пробуем сделать ход в нужную ячейку (если она свободна и игра не окончена)
    switch (currentSize) {
    case Three: ok = board3.makeMove(r, c, player); break;
    case Four:  ok = board4.makeMove(r, c, player); break;
    case Five:  ok = board5.makeMove(r, c, player); break;
    }

    if (!ok) return; //Если ход не удался (ячейка занята или ошибка) — ничего не делаем


    btn->setStyleSheet(st); //Применяем стиль (рисуем крестик или нолик)

    endGame(); //Проверяем, не закончилась ли игра (победа или ничья)

    if (!gameInProgress) return; //После завершения игры не продоложаем ее

    playerLocked = true;//Блокируем игрока и передаем ход ПК
    ui->messageLabel->setText("Дайте подумать…"); //Сообщение игроку
    timer->start(800); // Через 800 мс компьютер сделает ход
}


void MainWindow::onComputerSlot() //Ход компьютера
{
    if (!gameInProgress) return;

    timer->stop();
    computerMove();
    endGame();
}


void MainWindow::computerMove()
{
    int n = int(currentSize); //Получаем текущий размер поля

    //Выбираем нужную вкладку в зависимости от размера поля
    QWidget *tab = (currentSize == Three) ? ui->tab :
                       (currentSize == Four)  ? ui->tab_3 :
                       ui->tab_4;


    auto *grid = qobject_cast<QGridLayout*>(tab->layout()); //Получаем сетку кнопок на выбранной вкладке

    // Определяем стиль (изображение) для хода компьютера
    int size = static_cast<int>(currentSize);
    const QString st = (player == 'X')
                           ? StyleHelper::getZeroStyleForSize(size)
                           : StyleHelper::getCrossStyleForSize(size);


    while (true)//Компьютер пытается сделать случайный ход, пока не найдёт свободную клетку
    {
        int r = std::rand() % n; //Случайная строка
        int c = std::rand() % n; //Случайный столбец
        bool ok = false;

        //Пробуем сделать ход в зависимости от текущего размера поля
        switch (currentSize) {
        case Three: ok = board3.makeMove(r, c, (player == 'X') ? '0' : 'X'); break;
        case Four:  ok = board4.makeMove(r, c, (player == 'X') ? '0' : 'X'); break;
        case Five:  ok = board5.makeMove(r, c, (player == 'X') ? '0' : 'X'); break;
        }

        if (ok) {
            //Если ход успешен, применяем стиль к соответствующей кнопке
            qobject_cast<QPushButton*>(grid->itemAtPosition(r, c)->widget())
                ->setStyleSheet(st);
            break; //Выходим из цикла, значит ход сделан
        }
    }

    // Теперь снова ход игрока
    playerLocked = false;
    ui->messageLabel->setText("Ваш ход"); //Сообщение игроку
}


void MainWindow::endGame() //Проверка конца игры
{
    bool finished = false; //Флаг завершения игры
    char winner = '-'; //Победитель (пока никто)

    switch (currentSize) { //Для каждого поля проверяем результат игры
    case Three: finished = board3.isFinished(); winner = board3.getWinner(); break;
    case Four:  finished = board4.isFinished(); winner = board4.getWinner(); break;
    case Five:  finished = board5.isFinished(); winner = board5.getWinner(); break;
    }

    if (!finished) return; //Если игра ещё не завершена — выходим

    if (timer->isActive()) timer->stop(); //Останавливаем таймер, если он ещё работает

    gameInProgress = false; //Игра завершена
    playerLocked = true; //Игрок больше не может делать ходы

    highlightWinner(winner);

    // Показываем итоговое сообщение в зависимости от результата
    if (winner == player) {
        ui->messageLabel->setText("Победа!");  //Победил игрок
        ui->messageLabel->setStyleSheet(StyleHelper::getVictoryMessageStyle());
    } else if (winner == '-') {
        ui->messageLabel->setText("Ничья");    //Никто не победил
        ui->messageLabel->setStyleSheet(StyleHelper::getNormalMessageStyle());
    } else {
        ui->messageLabel->setText("Проигрыш!"); //Победил компьютер
        ui->messageLabel->setStyleSheet(StyleHelper::getLostMessageStyle());
    }

    ui->startButton->setText("Играть заново");
    ui->startButton->setEnabled(true);
    ui->leftButton->setEnabled(true);
    ui->rightButton->setEnabled(true);   //Подготовка кнопок к возможному новому старту

    ui->x3_Button->setEnabled(true);
    ui->x4_Button->setEnabled(true);
    ui->x5_Button->setEnabled(true);

    ui->aboutButton->setEnabled(true); //Теперь можно снова нажимать "Об игре"
}


void MainWindow::highlightWinner(char winner) //Подсветка ячеек после завершения игры
{
    //Получаем нужную вкладку с игровым полем в зависимости от текущего размера
    QWidget *tab = (currentSize == Three) ? ui->tab :
                       (currentSize == Four ) ? ui->tab_3 :
                       ui->tab_4;

    QGridLayout *grid = qobject_cast<QGridLayout*>(tab->layout()); //Приводим layout к QGridLayout

    int n = int(currentSize);   //Размер поля (3, 4 или 5)
    int size = static_cast<int>(currentSize); //Тоже размер, который используется для выбора правильных картинок

    //Проходим по всем ячейкам
    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < n; ++c) {

            char sym = '-'; //Сюда получим символ из ячейки (X, 0 или '-')

            switch(currentSize){// Считываем символ из соответствующего игрового поля
            case Three: sym = board3.at(r, c); break;
            case Four:  sym = board4.at(r, c); break;
            case Five:  sym = board5.at(r, c); break;
            }

            if (sym == '-') continue; //Если клетка пустая — пропускаем

            // Получаем кнопку по координатам
            QPushButton *btn = qobject_cast<QPushButton*>(grid->itemAtPosition(r, c)->widget());
            if (!btn) continue;

            //Выбираем стиль подсветки в зависимости от того, кто победил и каим символом
            QString style = (sym == 'X')
                                ? (sym == winner ? StyleHelper::getCrossVictoryStyle(size)  //Крестик победителя
                                                 : StyleHelper::getCrossLostStyle(size))     //Крестик проигравшего
                                : (sym == winner ? StyleHelper::getZeroVictoryStyle(size)   //Нолик победителя
                                                 : StyleHelper::getZeroLostStyle(size));     //Нолик проигравшего

            btn->setStyleSheet(style); //Применяем стиль к кнопке
        }
    }
}



