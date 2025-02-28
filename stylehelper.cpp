#include "stylehelper.h"


QString StyleHelper::getMainWidgetStyle()
{
    return "QWidget{background-image: url(:/resourses/images/bg_real.png);}";
}

QString StyleHelper::getStartButtonsStyle() //Для
{
    return "QPushButton{"
           "   color:#000000;"
           "   background: none;" //Чтобы поставить свой цвет Button
           "   border: none;"
           "   background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(66, 66, 66, 255), stop:1 rgba(255, 255, 255, 255));"
           "   font-family: 'Roboto';"
           "   font-size:18px;" //Размер шрифта
           "}"
           "QPushButton::hover{"
           "   background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(154, 154, 154, 255), stop:1 rgba(255, 255, 255, 255));"
           "}"
           "QPushButton::pressed{"
           "   background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(66, 66, 66, 255), stop:1 rgba(255, 255, 255, 255));"
           "}";
}
QString StyleHelper::getGameButtonsStyle()
{
    return "QPushButton{"
           "   color:#000000;"
           "   background: none;" //Чтобы поставить свой цвет Button
           "   border: none;"
           "   background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(103, 103, 103, 255), stop:1 rgba(255, 255, 255, 255));"
           "   font-family: 'Roboto';"
           "   font-size:15px;" //Размер шрифта
           "}"
           "QPushButton::hover{"
           "   background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(154, 154, 154, 255), stop:1 rgba(255, 255, 255, 255));"
           "}"
           "QPushButton::pressed{"
           "   background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(103, 103, 103, 255), stop:1 rgba(255, 255, 255, 255));"
           "}";
}

QString StyleHelper::getLeftButtonsStyle()
{
    return "QPushButton{"
        "  background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(18, 18, 18, 255), stop:1 rgba(255, 255, 255, 255));"
        "  background-image: url(:/resourses/images/cross_small.png);"
        "  background-repeat:no-repeat;"
        "  background-position: center center;"
        "  border:1px solid #333;"
        "  border-top-left-radius:5px;"
        "  border-bottom-left-radius:5px;"
        "}";
}

QString StyleHelper::getRightButtonsStyle()
{
    return "QPushButton{"
           "  background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(18, 18, 18, 255), stop:1 rgba(255, 255, 255, 255));"
           "  background-image: url(:/resourses/images/zero_small.png);"
           "  background-repeat:no-repeat;"
           "  background-position: center center;"
           "  border-left:none;" //Чтобы линия границы border была только с трех сторон, потому что на leftButton  с четырех
           "  border-top-right-radius:5px;"
           "  border-bottom-right-radius:5px;"
           "}";
}

QString StyleHelper::getLeftButtonActiveStyle()
{
    return "QPushButton{"
           "  background-color: qlineargradient(spread:reflect, x1:0.81, y1:0.795727, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(157, 157, 157, 255));"
           "  background-image: url(:/resourses/images/cross_small.png);"
           "  background-repeat:no-repeat;"
           "  background-position: center center;"
           "  border:1px solid #333;"
           "  border-top-left-radius:5px;"
           "  border-bottom-left-radius:5px;"
           "}";
}

QString StyleHelper::getRightButtonActiveStyle()
{
    return "QPushButton{"
           "  background-color: qlineargradient(spread:reflect, x1:0.81, y1:0.795727, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(157, 157, 157, 255));"
           "  background-image: url(:/resourses/images/zero_small.png);"
           "  background-repeat:no-repeat;"
           "  background-position: center center;"
           "  border:1px solid #333;"
           "  border-left:none;"
           "  border-top-right-radius:5px;"
           "  border-bottom-right-radius:5px;"
           "}";
}

QString StyleHelper::getBlankButtonStyle()
{
    return "QPushButton{"
           " border: none;"
           " background: #1c1c1c;"
           "}"
           "QPushButton::hover{"
           " background: #6B6B6B;"
           "}";

}

QString StyleHelper::getCrossNormalStyle()
{
    return "QPushButton{"
           " border: none;"
           " background: #1c1c1c url(:/resourses/images/cross_large.png) no-repeat center center;"
           "}"
           "QPushButton::hover{"
           " background-color: #6B6B6B;"
           "}";
}

QString StyleHelper::getCrossVictoryStyle()
{
    return "QPushButton{"
           " border: none;"
           " background-color: #44944A;"
           " background-image: url(:/resourses/images/cross_large.png);"
           " background-repeat: no-repeat;"
           " background-position: center center;"
           "}";
}

QString StyleHelper::getCrossLostStyle()
{
    return "QPushButton{"
           " border: none;"
           " background-color: #B00000;"
           " background-image: url(:/resourses/images/cross_large.png);"
           " background-repeat: no-repeat;"
           " background-position: center center;"
           "}";
}

QString StyleHelper::getZeroNormalStyle()
{
    return "QPushButton{"
           " border: none;"
           " background: #1c1c1c url(:/resourses/images/zero_large.png) no-repeat center center;"
           "}"
           "QPushButton::hover{"
           " background-color: #6B6B6B;"
           "}";
}

QString StyleHelper::getZeroVictoryStyle()
{
    return "QPushButton{"
           " border: none;"
           " background-color: #44944A;"
           " background-image: url(:/resourses/images/zero_large.png);"
           " background-repeat: no-repeat;"
           " background-position: center center;"
           "}";
}

QString StyleHelper::getZeroLostStyle()
{
    return "QPushButton{"
           " border: none;"
           " background-color: #B00000;"
           " background-image: url(:/resourses/images/zero_large.png);"
           " background-repeat: no-repeat;"
           " background-position: center center;"
           "}";
}

QString StyleHelper::getNormalMessageStyle()
{
    return "QLabel{"
           " font-family: 'Roboto Medium';"
           " font-size:12px;"
           " background: none;"
           " color:#ffffff;"
           "}";
}

QString StyleHelper::getVictoryMessageStyle()
{
    return "QLabel{"
           " font-family: 'Roboto Medium';"
           " font-size:16px;"
           " background: #44944A;"
           " border:1px solid #1c7c33;"
           " color:#ffffff;"
           "}";
}

QString StyleHelper::getLostMessageStyle()
{
    return "QLabel{"
           " font-family: 'Roboto Medium';"
           " font-size:16px;"
           " background: #B00000;"
           " border:1px solid #8B0000;"
           " color:#ffffff;"
           "}";

}

QString StyleHelper::getAboutTextStyle()
{
    return "QLabel{"
           " font-family: 'Roboto Medium';"
           " font-size:16px;"
           " color:#ffffff;"
           " font-style:italic;"
           "}";

}
