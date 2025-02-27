#ifndef STYLEHELPER_H
#define STYLEHELPER_H
#include <QString>
class StyleHelper
{
public:
    static QString getMainWidgetStyle();
    static QString getStartButtonsStyle(); //Кнопки "Играть" и "Об игре"
    static QString getGameButtonsStyle(); //Кнопки "3X3", "4X4", "5X5"
    static QString getLeftButtonsStyle(); //Кнопка за игру крестом
    static QString getRightButtonsStyle(); //Кнопка за игру нулем
    static QString getLeftButtonActiveStyle(); //Кнопка за игру крестом (нажата)
    static QString getRightButtonActiveStyle(); //Кнопка за игру нулем (нажата)



    static QString getAboutTextStyle();
};

#endif // STYLEHELPER_H
