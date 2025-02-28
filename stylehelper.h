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

    static QString getBlankButtonStyle(); //Не хаполненная ячейка игрового поля

    static QString getCrossNormalStyle(); //Ячейка, заполненная крестом
    static QString getCrossVictoryStyle();//Ячейка, заполненная крестом, приэтом игрок выиграл
    static QString getCrossLostStyle();//Ячейка, заполненная крестом, приэтом игрок проиграл

    static QString getZeroNormalStyle(); //Ячейка, заполненная нулем
    static QString getZeroVictoryStyle();//Ячейка, заполненная нулем, приэтом игрок выиграл
    static QString getZeroLostStyle();//Ячейка, заполненная нулем, приэтом игрок проиграл

    static QString getNormalMessageStyle();//Сообщение, когда игра активна
    static QString getVictoryMessageStyle();//Сообщение, когда игра выиграна
    static QString getLostMessageStyle();//Сообщение, когда игра проиграна



    static QString getAboutTextStyle();
};

#endif // STYLEHELPER_H
