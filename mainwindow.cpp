#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTabBar>
#include "stylehelper.h"
#include <QStyleOption>
#include <QFontDatabase>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide(); // Прячем таб бары (3X3, 4X4, 5X5, Об игре)
    ui->tabWidget->setCurrentIndex(0); // При первом включении окна высвечивается окно таб бара 3X3
    setInterfaceStyle();

    int id = QFontDatabase::addApplicationFont(":/resourses/fonts/Roboto-Medium.ttf");//Подключаем шрифт
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    qDebug()<<family; //Выводим название шрифта
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event) //Необходимо для создания возможности вносить изменения в отрисовку виджета
{
    QStyleOption opt;

    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}

void MainWindow::setInterfaceStyle()
{
    this->setStyleSheet(StyleHelper::getMainWidgetStyle());
    ui->startButton->setStyleSheet(StyleHelper::getStartButtonsStyle());
    ui->aboutButton->setStyleSheet(StyleHelper::getStartButtonsStyle());
    ui->x3_Button->setStyleSheet(StyleHelper::getGameButtonsStyle());
    ui->x4_Button->setStyleSheet(StyleHelper::getGameButtonsStyle());
    ui->x5_Button->setStyleSheet(StyleHelper::getGameButtonsStyle());
    ui->leftButton->setStyleSheet(StyleHelper::getLeftButtonActiveStyle());
    ui->rightButton->setStyleSheet(StyleHelper::getRightButtonsStyle());
    ui->pushButton3_0_0->setStyleSheet(StyleHelper::getBlankButtonStyle());   //Реализация всех созданных стилей из файла stylehelper.cpp
    ui->pushButton3_0_1->setStyleSheet(StyleHelper::getCrossNormalStyle());
    ui->pushButton3_0_2->setStyleSheet(StyleHelper::getCrossVictoryStyle());
    ui->pushButton3_1_0->setStyleSheet(StyleHelper::getCrossLostStyle());
    ui->pushButton3_1_1->setStyleSheet(StyleHelper::getZeroNormalStyle());
    ui->pushButton3_1_2->setStyleSheet(StyleHelper::getZeroVictoryStyle());
    ui->pushButton3_2_0->setStyleSheet(StyleHelper::getZeroLostStyle());



    ui->messageLabel->setStyleSheet(StyleHelper::getVictoryMessageStyle()); //Текст над меню пользователя
    ui->messageLabel->setText("Ход крестов");




    ui->aboutTextLabel->setStyleSheet(StyleHelper::getAboutTextStyle());
}

void MainWindow::changeButtonStatus(int num) //Выбор знака, за который пользователь бедт играть (крест/ноль)
{
    if (num==1){
        ui->leftButton->setStyleSheet(StyleHelper::getLeftButtonActiveStyle());
        ui->rightButton->setStyleSheet(StyleHelper::getRightButtonsStyle());
    } else{
        ui->leftButton->setStyleSheet(StyleHelper::getLeftButtonsStyle());
        ui->rightButton->setStyleSheet(StyleHelper::getRightButtonActiveStyle());
    }
}


void MainWindow::on_leftButton_clicked() // Переключение возмости игры (за кресты или нули)
{
    changeButtonStatus(1);
}


void MainWindow::on_rightButton_clicked() // Переключение возмости игры (за кресты или нули)
{
    changeButtonStatus(0);
}


void MainWindow::on_x3_Button_clicked() // Переход на вкладку с 3X3
{
    ui->tabWidget->setCurrentIndex(0);
}




void MainWindow::on_x4_Button_clicked()
{
    ui->tabWidget->setCurrentIndex(1); // Переход на вкладку с 4X4
}


void MainWindow::on_x5_Button_clicked()
{
    ui->tabWidget->setCurrentIndex(2); // Переход на вкладку с 5X5
}


void MainWindow::on_aboutButton_clicked()
{
    ui->tabWidget->setCurrentIndex(3); // Переход на вкладку "Об игре"
}

