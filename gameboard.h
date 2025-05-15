#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <array>
#include <cstddef>

template <std::size_t N> //Поддерживает любое N×N поле
class GameBoard
{
public:

    GameBoard() { reset(); } // Сразу сбрасывает поле в начальное состояние

    // Сброс игры: очищает все клетки, обнуляет прогресс и победителя
    void reset()
    {
        for (auto &row : cells) row.fill('-'); // заполняем все клетки символом '-'
        progress = 0;
        finished = false;
        winner   = '-';
    }

    // Получить символ в конкретной клетке
    char  at(std::size_t r, std::size_t c) const { return cells[r][c]; }

    // Проверка на завершение игры
    bool  isFinished() const  { return finished; }

    // Проверка на ничью
    bool  isDraw()     const  { return finished && winner=='-'; }

    // Проверка исхода: победил, проиграл или ничья
    char  getWinner()  const  { return winner; }

    //! Сделать ход. Возвращает false, если ход невозможен (например, клетка занята или игра закончена)
    bool makeMove(std::size_t r, std::size_t c, char sym)
    {
        if (finished || r>=N || c>=N || cells[r][c] != '-') return false; // недопустимый ход
        cells[r][c] = sym;  // ставим символ в клетку
        ++progress;         // увеличиваем количество сделанных ходов
        evaluate();         // проверяем, не завершилась ли игра
        return true;
    }

private:

    void evaluate() //Проверяем победу или ничью после каждого сделанного хода
    {
        const char SYM[2] = {'X','0'}; //Два возможных игрока

        for (char s : SYM)
        {
            // Проверка всех строк
            for (std::size_t r = 0; r < N; ++r) {
                bool ok = true;
                for (std::size_t c = 0; c < N; ++c)
                    if (cells[r][c] != s) { ok = false; break; }
                if (ok) { finish(s); return; }
            }

            // Проверка всех столбцов
            for (std::size_t c = 0; c < N; ++c) {
                bool ok = true;
                for (std::size_t r = 0; r < N; ++r)
                    if (cells[r][c] != s) { ok = false; break; }
                if (ok) { finish(s); return; }
            }

            // Проверка главной диагонали
            {
                bool ok = true;
                for (std::size_t i = 0; i < N; ++i)
                    if (cells[i][i] != s) { ok = false; break; }
                if (ok) { finish(s); return; }
            }

            // Проверка побочной диагонали
            {
                bool ok = true;
                for (std::size_t i = 0; i < N; ++i)
                    if (cells[i][N - 1 - i] != s) { ok = false; break; }
                if (ok) { finish(s); return; }
            }
        }

        if (progress == N*N) finish('-'); //Определение ничьи
    }

    void finish(char w){ finished = true; winner = w; }//Флаг на завершение игры (победителя)

private:
    std::array<std::array<char, N>, N> cells; // Двумерный массив клеток поля

    std::size_t progress{0}; // Сколько ходов сделано
    bool finished{false};    // Завершена ли игра
    char winner{'-'};        // Победитель (крест или ноль) или ничья
};

#endif // GAMEBOARD_H
