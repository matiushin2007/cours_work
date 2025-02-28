/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLabel *messageLabel;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *x3_Button;
    QPushButton *x4_Button;
    QPushButton *x5_Button;
    QPushButton *startButton;
    QPushButton *aboutButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *pushButton3_1_1;
    QPushButton *pushButton3_0_2;
    QPushButton *pushButton3_0_0;
    QPushButton *pushButton3_1_0;
    QPushButton *pushButton3_0_1;
    QPushButton *pushButton3_2_1;
    QPushButton *pushButton3_2_0;
    QPushButton *pushButton3_2_2;
    QPushButton *pushButton3_1_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_28;
    QPushButton *pushButton_17;
    QPushButton *pushButton_31;
    QPushButton *pushButton_26;
    QPushButton *pushButton_29;
    QPushButton *pushButton_25;
    QPushButton *pushButton_27;
    QPushButton *pushButton_32;
    QPushButton *pushButton_30;
    QPushButton *pushButton_24;
    QPushButton *pushButton_21;
    QPushButton *pushButton_23;
    QPushButton *pushButton_22;
    QPushButton *pushButton_20;
    QPushButton *pushButton_19;
    QPushButton *pushButton_18;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_36;
    QPushButton *pushButton_37;
    QPushButton *pushButton_38;
    QPushButton *pushButton_41;
    QPushButton *pushButton_42;
    QPushButton *pushButton_40;
    QPushButton *pushButton_39;
    QPushButton *pushButton_43;
    QPushButton *pushButton_46;
    QPushButton *pushButton_47;
    QPushButton *pushButton_45;
    QPushButton *pushButton_44;
    QPushButton *pushButton_48;
    QPushButton *pushButton_51;
    QPushButton *pushButton_52;
    QPushButton *pushButton_50;
    QPushButton *pushButton_49;
    QPushButton *pushButton_53;
    QPushButton *pushButton_56;
    QPushButton *pushButton_57;
    QPushButton *pushButton_55;
    QPushButton *pushButton_54;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *aboutTextLabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 547);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(700, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourses/images/title_real.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/resourses/images/name.png")));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label);

        messageLabel = new QLabel(centralwidget);
        messageLabel->setObjectName("messageLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(messageLabel->sizePolicy().hasHeightForWidth());
        messageLabel->setSizePolicy(sizePolicy);
        messageLabel->setMinimumSize(QSize(0, 30));
        messageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(messageLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        leftButton = new QPushButton(centralwidget);
        leftButton->setObjectName("leftButton");
        leftButton->setMinimumSize(QSize(0, 30));
        leftButton->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(leftButton);

        rightButton = new QPushButton(centralwidget);
        rightButton->setObjectName("rightButton");
        rightButton->setMinimumSize(QSize(0, 30));
        rightButton->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(rightButton);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        x3_Button = new QPushButton(centralwidget);
        x3_Button->setObjectName("x3_Button");

        horizontalLayout_7->addWidget(x3_Button);

        x4_Button = new QPushButton(centralwidget);
        x4_Button->setObjectName("x4_Button");

        horizontalLayout_7->addWidget(x4_Button);

        x5_Button = new QPushButton(centralwidget);
        x5_Button->setObjectName("x5_Button");

        horizontalLayout_7->addWidget(x5_Button);


        verticalLayout_4->addLayout(horizontalLayout_7);

        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setMinimumSize(QSize(0, 40));

        verticalLayout_4->addWidget(startButton);

        aboutButton = new QPushButton(centralwidget);
        aboutButton->setObjectName("aboutButton");
        aboutButton->setMinimumSize(QSize(0, 40));
        aboutButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(aboutButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(320, 320));
        tabWidget->setMaximumSize(QSize(320, 320));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget{\n"
"	border:none;\n"
"}\n"
"QTabWidget::pane{\n"
"	border:1px solid #ffffff;\n"
"	border-radius:5px\n"
"}\n"
"QWidget#tab{\n"
"	background: none;\n"
"	background-color: #b5bfbb\n"
"}\n"
"QWidget#tab_3{\n"
"	background: none;\n"
"	background-color: #b5bfbb\n"
"}\n"
"QWidget#tab_4{\n"
"	background: none;\n"
"	background-color: #b5bfbb\n"
"}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(5, 5, 5, 5);
        pushButton3_1_1 = new QPushButton(tab);
        pushButton3_1_1->setObjectName("pushButton3_1_1");
        sizePolicy1.setHeightForWidth(pushButton3_1_1->sizePolicy().hasHeightForWidth());
        pushButton3_1_1->setSizePolicy(sizePolicy1);
        pushButton3_1_1->setMinimumSize(QSize(100, 100));
        pushButton3_1_1->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton3_1_1, 1, 1, 1, 1);

        pushButton3_0_2 = new QPushButton(tab);
        pushButton3_0_2->setObjectName("pushButton3_0_2");
        sizePolicy1.setHeightForWidth(pushButton3_0_2->sizePolicy().hasHeightForWidth());
        pushButton3_0_2->setSizePolicy(sizePolicy1);
        pushButton3_0_2->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton3_0_2, 0, 2, 1, 1);

        pushButton3_0_0 = new QPushButton(tab);
        pushButton3_0_0->setObjectName("pushButton3_0_0");
        sizePolicy1.setHeightForWidth(pushButton3_0_0->sizePolicy().hasHeightForWidth());
        pushButton3_0_0->setSizePolicy(sizePolicy1);
        pushButton3_0_0->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton3_0_0, 0, 0, 1, 1);

        pushButton3_1_0 = new QPushButton(tab);
        pushButton3_1_0->setObjectName("pushButton3_1_0");
        sizePolicy1.setHeightForWidth(pushButton3_1_0->sizePolicy().hasHeightForWidth());
        pushButton3_1_0->setSizePolicy(sizePolicy1);
        pushButton3_1_0->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton3_1_0, 1, 0, 1, 1);

        pushButton3_0_1 = new QPushButton(tab);
        pushButton3_0_1->setObjectName("pushButton3_0_1");
        sizePolicy1.setHeightForWidth(pushButton3_0_1->sizePolicy().hasHeightForWidth());
        pushButton3_0_1->setSizePolicy(sizePolicy1);
        pushButton3_0_1->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton3_0_1, 0, 1, 1, 1);

        pushButton3_2_1 = new QPushButton(tab);
        pushButton3_2_1->setObjectName("pushButton3_2_1");
        sizePolicy1.setHeightForWidth(pushButton3_2_1->sizePolicy().hasHeightForWidth());
        pushButton3_2_1->setSizePolicy(sizePolicy1);
        pushButton3_2_1->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton3_2_1, 2, 1, 1, 1);

        pushButton3_2_0 = new QPushButton(tab);
        pushButton3_2_0->setObjectName("pushButton3_2_0");
        sizePolicy1.setHeightForWidth(pushButton3_2_0->sizePolicy().hasHeightForWidth());
        pushButton3_2_0->setSizePolicy(sizePolicy1);
        pushButton3_2_0->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton3_2_0, 2, 0, 1, 1);

        pushButton3_2_2 = new QPushButton(tab);
        pushButton3_2_2->setObjectName("pushButton3_2_2");
        sizePolicy1.setHeightForWidth(pushButton3_2_2->sizePolicy().hasHeightForWidth());
        pushButton3_2_2->setSizePolicy(sizePolicy1);
        pushButton3_2_2->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton3_2_2, 2, 2, 1, 1);

        pushButton3_1_2 = new QPushButton(tab);
        pushButton3_1_2->setObjectName("pushButton3_1_2");
        sizePolicy1.setHeightForWidth(pushButton3_1_2->sizePolicy().hasHeightForWidth());
        pushButton3_1_2->setSizePolicy(sizePolicy1);
        pushButton3_1_2->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton3_1_2, 1, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_28 = new QPushButton(tab_3);
        pushButton_28->setObjectName("pushButton_28");
        sizePolicy1.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy1);
        pushButton_28->setMinimumSize(QSize(70, 70));
        pushButton_28->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_28, 2, 3, 1, 1);

        pushButton_17 = new QPushButton(tab_3);
        pushButton_17->setObjectName("pushButton_17");
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setMinimumSize(QSize(70, 70));
        pushButton_17->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_17, 0, 0, 1, 1);

        pushButton_31 = new QPushButton(tab_3);
        pushButton_31->setObjectName("pushButton_31");
        sizePolicy1.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy1);
        pushButton_31->setMinimumSize(QSize(70, 70));
        pushButton_31->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_31, 3, 3, 1, 1);

        pushButton_26 = new QPushButton(tab_3);
        pushButton_26->setObjectName("pushButton_26");
        sizePolicy1.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy1);
        pushButton_26->setMinimumSize(QSize(70, 70));
        pushButton_26->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_26, 2, 0, 1, 1);

        pushButton_29 = new QPushButton(tab_3);
        pushButton_29->setObjectName("pushButton_29");
        sizePolicy1.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy1);
        pushButton_29->setMinimumSize(QSize(70, 70));
        pushButton_29->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_29, 3, 0, 1, 1);

        pushButton_25 = new QPushButton(tab_3);
        pushButton_25->setObjectName("pushButton_25");
        sizePolicy1.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy1);
        pushButton_25->setMinimumSize(QSize(70, 70));
        pushButton_25->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_25, 2, 2, 1, 1);

        pushButton_27 = new QPushButton(tab_3);
        pushButton_27->setObjectName("pushButton_27");
        sizePolicy1.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy1);
        pushButton_27->setMinimumSize(QSize(70, 70));
        pushButton_27->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_27, 2, 1, 1, 1);

        pushButton_32 = new QPushButton(tab_3);
        pushButton_32->setObjectName("pushButton_32");
        sizePolicy1.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy1);
        pushButton_32->setMinimumSize(QSize(70, 70));
        pushButton_32->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_32, 3, 1, 1, 1);

        pushButton_30 = new QPushButton(tab_3);
        pushButton_30->setObjectName("pushButton_30");
        sizePolicy1.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy1);
        pushButton_30->setMinimumSize(QSize(70, 70));
        pushButton_30->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_30, 3, 2, 1, 1);

        pushButton_24 = new QPushButton(tab_3);
        pushButton_24->setObjectName("pushButton_24");
        sizePolicy1.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy1);
        pushButton_24->setMinimumSize(QSize(70, 70));
        pushButton_24->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_24, 1, 3, 1, 1);

        pushButton_21 = new QPushButton(tab_3);
        pushButton_21->setObjectName("pushButton_21");
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);
        pushButton_21->setMinimumSize(QSize(70, 70));
        pushButton_21->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_21, 1, 2, 1, 1);

        pushButton_23 = new QPushButton(tab_3);
        pushButton_23->setObjectName("pushButton_23");
        sizePolicy1.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy1);
        pushButton_23->setMinimumSize(QSize(70, 70));
        pushButton_23->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_23, 1, 1, 1, 1);

        pushButton_22 = new QPushButton(tab_3);
        pushButton_22->setObjectName("pushButton_22");
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        pushButton_22->setMinimumSize(QSize(70, 70));
        pushButton_22->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_22, 1, 0, 1, 1);

        pushButton_20 = new QPushButton(tab_3);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setMinimumSize(QSize(70, 70));
        pushButton_20->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_20, 0, 3, 1, 1);

        pushButton_19 = new QPushButton(tab_3);
        pushButton_19->setObjectName("pushButton_19");
        sizePolicy1.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy1);
        pushButton_19->setMinimumSize(QSize(70, 70));
        pushButton_19->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_19, 0, 2, 1, 1);

        pushButton_18 = new QPushButton(tab_3);
        pushButton_18->setObjectName("pushButton_18");
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setMinimumSize(QSize(70, 70));
        pushButton_18->setMaximumSize(QSize(70, 70));

        gridLayout_2->addWidget(pushButton_18, 0, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setObjectName("gridLayout_3");
        pushButton_33 = new QPushButton(tab_4);
        pushButton_33->setObjectName("pushButton_33");
        sizePolicy1.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy1);
        pushButton_33->setMinimumSize(QSize(55, 55));
        pushButton_33->setMaximumSize(QSize(55, 55));
        pushButton_33->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_33, 0, 0, 1, 1);

        pushButton_34 = new QPushButton(tab_4);
        pushButton_34->setObjectName("pushButton_34");
        sizePolicy1.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy1);
        pushButton_34->setMinimumSize(QSize(55, 55));
        pushButton_34->setMaximumSize(QSize(55, 55));
        pushButton_34->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_34, 0, 1, 1, 1);

        pushButton_35 = new QPushButton(tab_4);
        pushButton_35->setObjectName("pushButton_35");
        sizePolicy1.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy1);
        pushButton_35->setMinimumSize(QSize(55, 55));
        pushButton_35->setMaximumSize(QSize(55, 55));
        pushButton_35->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_35, 0, 2, 1, 1);

        pushButton_36 = new QPushButton(tab_4);
        pushButton_36->setObjectName("pushButton_36");
        sizePolicy1.setHeightForWidth(pushButton_36->sizePolicy().hasHeightForWidth());
        pushButton_36->setSizePolicy(sizePolicy1);
        pushButton_36->setMinimumSize(QSize(55, 55));
        pushButton_36->setMaximumSize(QSize(55, 55));
        pushButton_36->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_36, 0, 3, 1, 1);

        pushButton_37 = new QPushButton(tab_4);
        pushButton_37->setObjectName("pushButton_37");
        sizePolicy1.setHeightForWidth(pushButton_37->sizePolicy().hasHeightForWidth());
        pushButton_37->setSizePolicy(sizePolicy1);
        pushButton_37->setMinimumSize(QSize(55, 55));
        pushButton_37->setMaximumSize(QSize(55, 55));
        pushButton_37->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_37, 0, 4, 1, 1);

        pushButton_38 = new QPushButton(tab_4);
        pushButton_38->setObjectName("pushButton_38");
        sizePolicy1.setHeightForWidth(pushButton_38->sizePolicy().hasHeightForWidth());
        pushButton_38->setSizePolicy(sizePolicy1);
        pushButton_38->setMinimumSize(QSize(55, 55));
        pushButton_38->setMaximumSize(QSize(55, 55));
        pushButton_38->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_38, 1, 0, 1, 1);

        pushButton_41 = new QPushButton(tab_4);
        pushButton_41->setObjectName("pushButton_41");
        sizePolicy1.setHeightForWidth(pushButton_41->sizePolicy().hasHeightForWidth());
        pushButton_41->setSizePolicy(sizePolicy1);
        pushButton_41->setMinimumSize(QSize(55, 55));
        pushButton_41->setMaximumSize(QSize(55, 55));
        pushButton_41->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_41, 1, 1, 1, 1);

        pushButton_42 = new QPushButton(tab_4);
        pushButton_42->setObjectName("pushButton_42");
        sizePolicy1.setHeightForWidth(pushButton_42->sizePolicy().hasHeightForWidth());
        pushButton_42->setSizePolicy(sizePolicy1);
        pushButton_42->setMinimumSize(QSize(55, 55));
        pushButton_42->setMaximumSize(QSize(55, 55));
        pushButton_42->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_42, 1, 2, 1, 1);

        pushButton_40 = new QPushButton(tab_4);
        pushButton_40->setObjectName("pushButton_40");
        sizePolicy1.setHeightForWidth(pushButton_40->sizePolicy().hasHeightForWidth());
        pushButton_40->setSizePolicy(sizePolicy1);
        pushButton_40->setMinimumSize(QSize(55, 55));
        pushButton_40->setMaximumSize(QSize(55, 55));
        pushButton_40->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_40, 1, 3, 1, 1);

        pushButton_39 = new QPushButton(tab_4);
        pushButton_39->setObjectName("pushButton_39");
        sizePolicy1.setHeightForWidth(pushButton_39->sizePolicy().hasHeightForWidth());
        pushButton_39->setSizePolicy(sizePolicy1);
        pushButton_39->setMinimumSize(QSize(55, 55));
        pushButton_39->setMaximumSize(QSize(55, 55));
        pushButton_39->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_39, 1, 4, 1, 1);

        pushButton_43 = new QPushButton(tab_4);
        pushButton_43->setObjectName("pushButton_43");
        sizePolicy1.setHeightForWidth(pushButton_43->sizePolicy().hasHeightForWidth());
        pushButton_43->setSizePolicy(sizePolicy1);
        pushButton_43->setMinimumSize(QSize(55, 55));
        pushButton_43->setMaximumSize(QSize(55, 55));
        pushButton_43->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_43, 2, 0, 1, 1);

        pushButton_46 = new QPushButton(tab_4);
        pushButton_46->setObjectName("pushButton_46");
        sizePolicy1.setHeightForWidth(pushButton_46->sizePolicy().hasHeightForWidth());
        pushButton_46->setSizePolicy(sizePolicy1);
        pushButton_46->setMinimumSize(QSize(55, 55));
        pushButton_46->setMaximumSize(QSize(55, 55));
        pushButton_46->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_46, 2, 1, 1, 1);

        pushButton_47 = new QPushButton(tab_4);
        pushButton_47->setObjectName("pushButton_47");
        sizePolicy1.setHeightForWidth(pushButton_47->sizePolicy().hasHeightForWidth());
        pushButton_47->setSizePolicy(sizePolicy1);
        pushButton_47->setMinimumSize(QSize(55, 55));
        pushButton_47->setMaximumSize(QSize(55, 55));
        pushButton_47->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_47, 2, 2, 1, 1);

        pushButton_45 = new QPushButton(tab_4);
        pushButton_45->setObjectName("pushButton_45");
        sizePolicy1.setHeightForWidth(pushButton_45->sizePolicy().hasHeightForWidth());
        pushButton_45->setSizePolicy(sizePolicy1);
        pushButton_45->setMinimumSize(QSize(55, 55));
        pushButton_45->setMaximumSize(QSize(55, 55));
        pushButton_45->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_45, 2, 3, 1, 1);

        pushButton_44 = new QPushButton(tab_4);
        pushButton_44->setObjectName("pushButton_44");
        sizePolicy1.setHeightForWidth(pushButton_44->sizePolicy().hasHeightForWidth());
        pushButton_44->setSizePolicy(sizePolicy1);
        pushButton_44->setMinimumSize(QSize(55, 55));
        pushButton_44->setMaximumSize(QSize(55, 55));
        pushButton_44->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_44, 2, 4, 1, 1);

        pushButton_48 = new QPushButton(tab_4);
        pushButton_48->setObjectName("pushButton_48");
        sizePolicy1.setHeightForWidth(pushButton_48->sizePolicy().hasHeightForWidth());
        pushButton_48->setSizePolicy(sizePolicy1);
        pushButton_48->setMinimumSize(QSize(55, 55));
        pushButton_48->setMaximumSize(QSize(55, 55));
        pushButton_48->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_48, 3, 0, 1, 1);

        pushButton_51 = new QPushButton(tab_4);
        pushButton_51->setObjectName("pushButton_51");
        sizePolicy1.setHeightForWidth(pushButton_51->sizePolicy().hasHeightForWidth());
        pushButton_51->setSizePolicy(sizePolicy1);
        pushButton_51->setMinimumSize(QSize(55, 55));
        pushButton_51->setMaximumSize(QSize(55, 55));
        pushButton_51->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_51, 3, 1, 1, 1);

        pushButton_52 = new QPushButton(tab_4);
        pushButton_52->setObjectName("pushButton_52");
        sizePolicy1.setHeightForWidth(pushButton_52->sizePolicy().hasHeightForWidth());
        pushButton_52->setSizePolicy(sizePolicy1);
        pushButton_52->setMinimumSize(QSize(55, 55));
        pushButton_52->setMaximumSize(QSize(55, 55));
        pushButton_52->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_52, 3, 2, 1, 1);

        pushButton_50 = new QPushButton(tab_4);
        pushButton_50->setObjectName("pushButton_50");
        sizePolicy1.setHeightForWidth(pushButton_50->sizePolicy().hasHeightForWidth());
        pushButton_50->setSizePolicy(sizePolicy1);
        pushButton_50->setMinimumSize(QSize(55, 55));
        pushButton_50->setMaximumSize(QSize(55, 55));
        pushButton_50->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_50, 3, 3, 1, 1);

        pushButton_49 = new QPushButton(tab_4);
        pushButton_49->setObjectName("pushButton_49");
        sizePolicy1.setHeightForWidth(pushButton_49->sizePolicy().hasHeightForWidth());
        pushButton_49->setSizePolicy(sizePolicy1);
        pushButton_49->setMinimumSize(QSize(55, 55));
        pushButton_49->setMaximumSize(QSize(55, 55));
        pushButton_49->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_49, 3, 4, 1, 1);

        pushButton_53 = new QPushButton(tab_4);
        pushButton_53->setObjectName("pushButton_53");
        sizePolicy1.setHeightForWidth(pushButton_53->sizePolicy().hasHeightForWidth());
        pushButton_53->setSizePolicy(sizePolicy1);
        pushButton_53->setMinimumSize(QSize(55, 55));
        pushButton_53->setMaximumSize(QSize(55, 55));
        pushButton_53->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_53, 4, 0, 1, 1);

        pushButton_56 = new QPushButton(tab_4);
        pushButton_56->setObjectName("pushButton_56");
        sizePolicy1.setHeightForWidth(pushButton_56->sizePolicy().hasHeightForWidth());
        pushButton_56->setSizePolicy(sizePolicy1);
        pushButton_56->setMinimumSize(QSize(55, 55));
        pushButton_56->setMaximumSize(QSize(55, 55));
        pushButton_56->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_56, 4, 1, 1, 1);

        pushButton_57 = new QPushButton(tab_4);
        pushButton_57->setObjectName("pushButton_57");
        sizePolicy1.setHeightForWidth(pushButton_57->sizePolicy().hasHeightForWidth());
        pushButton_57->setSizePolicy(sizePolicy1);
        pushButton_57->setMinimumSize(QSize(55, 55));
        pushButton_57->setMaximumSize(QSize(55, 55));
        pushButton_57->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_57, 4, 2, 1, 1);

        pushButton_55 = new QPushButton(tab_4);
        pushButton_55->setObjectName("pushButton_55");
        sizePolicy1.setHeightForWidth(pushButton_55->sizePolicy().hasHeightForWidth());
        pushButton_55->setSizePolicy(sizePolicy1);
        pushButton_55->setMinimumSize(QSize(55, 55));
        pushButton_55->setMaximumSize(QSize(55, 55));
        pushButton_55->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_55, 4, 3, 1, 1);

        pushButton_54 = new QPushButton(tab_4);
        pushButton_54->setObjectName("pushButton_54");
        sizePolicy1.setHeightForWidth(pushButton_54->sizePolicy().hasHeightForWidth());
        pushButton_54->setSizePolicy(sizePolicy1);
        pushButton_54->setMinimumSize(QSize(55, 55));
        pushButton_54->setMaximumSize(QSize(55, 55));
        pushButton_54->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(pushButton_54, 4, 4, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        aboutTextLabel = new QLabel(tab_2);
        aboutTextLabel->setObjectName("aboutTextLabel");
        aboutTextLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        aboutTextLabel->setWordWrap(true);

        verticalLayout_5->addWidget(aboutTextLabel);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_3->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270-\320\275\320\276\320\273\320\270\320\272\320\270 Prod. Mat", nullptr));
        label->setText(QString());
        messageLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\261\320\265\320\264\320\260!", nullptr));
        leftButton->setText(QString());
        rightButton->setText(QString());
        x3_Button->setText(QCoreApplication::translate("MainWindow", "3X3", nullptr));
        x4_Button->setText(QCoreApplication::translate("MainWindow", "4X4", nullptr));
        x5_Button->setText(QCoreApplication::translate("MainWindow", "5X5", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        aboutButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
        pushButton3_1_1->setText(QString());
        pushButton3_0_2->setText(QString());
        pushButton3_0_0->setText(QString());
        pushButton3_1_0->setText(QString());
        pushButton3_0_1->setText(QString());
        pushButton3_2_1->setText(QString());
        pushButton3_2_0->setText(QString());
        pushButton3_2_2->setText(QString());
        pushButton3_1_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", nullptr));
        pushButton_28->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_31->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_26->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_29->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_27->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_32->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_30->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "4X4", nullptr));
        pushButton_33->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_34->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_35->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_36->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_37->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_38->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_41->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_42->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_40->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_39->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_43->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_46->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_47->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_45->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_44->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_48->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_51->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_52->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_50->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_49->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_53->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_56->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_57->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_55->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_54->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "5X5", nullptr));
        aboutTextLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\202\321\216\321\210\320\270\320\275 \320\221\320\276\320\263\320\264\320\260\320\275 \320\220\320\273\320\265\320\272\321\201\320\265\320\265\320\262\320\270\321\207 \320\221\320\230\320\222244 \320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
