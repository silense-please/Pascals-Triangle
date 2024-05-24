#include "functions.h"
int main() {
    setlocale(LC_ALL, "Russian");
    int height = 10, width ,height_start = 0, menu = 0;
    cout << "Программа просчёта Треугольника Паскаля \nФункции: \n1.Стандартный вывод "
            "\n2.Прямоугольный вывод \n3.Вывод фрактала \nВыберите функцию:";
    cin >> menu;
    while (!(menu== 1 || menu== 2 || menu== 3)){
        cout << "Введите число от 1 до 3:";
        cin >> menu;
    }
    cout << "Введите верхнюю границу строк(макс 32):";
    cin >> height_start;
    while (height_start > 32){
        cout << "Введите число меньше 33:";
        cin >> height_start;
    }
    cout << "Введите нижнюю границу строк(макс 32):";
    cin >> height;
    while (height > 32){
        cout << "Введите число меньше 33:";
        cin >> height;
    }

    height++;
    width = height / 2 + 1;
    unsigned int Array[height][width];
    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j) {
            Array[i][j] = 0;
        }
    }

    Array[0][width-1] = 1;
    for(int i = 1; i < height; ++i){
        if(i % 2 == 0){
            for (int j = 0; j < width-1; ++j){
                Array[i][j] = Array[i-1][j] + Array[i-1][j+1];
            }
            Array[i][width-1] = Array[i-1][width-1] * 2;
        }
        else{
            for (int j = 1; j < width; ++j){
                Array[i][j] = Array[i-1][j] + Array[i-1][j-1];
            }
        }
    }
    unsigned int *ptr[height];
    for (int i = 0; i < height; ++i)
        ptr[i] = Array[i];

    if (menu == 1)
        output(height, width, ptr, height_start);
    if (menu == 2)
      angle_output(height, width, ptr, height_start);
    if (menu == 3)
      fractal(height, width, ptr, height_start);
    return 0;
}
