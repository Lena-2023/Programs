#include <iostream>

    int main() {
    // Определяем размер таблицы умножения
    int rows = 10;
    int cols = 10;

    // Создаем двумерный массив для хранения таблицы умножения
    int multiplicationTable[rows][cols];

    // Заполняем таблицу умножения
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            multiplicationTable[i][j] = (i + 1) * (j + 1);
        }
    }

    // Выводим таблицу умножения на экран
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            std::cout << multiplicationTable[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
