#include <iostream>

using namespace std;

//Прототипы функций
void quest_5();
void sort_mas(char mas[30]);
void output_mas(char mas[30]);

int main() {
    quest_5();
    return 0;
}

void quest_5() {
    //Создание массива
    char mas[30];

    //Заполнение массива
    for (int i = 0; i < 30; i++) {
        cin >> mas[i];
    }

    //Сортировка массива
    sort_mas(mas);
    //Вывод массива
    output_mas(mas);
}

//Функция для сортировки массива пузырьком
void sort_mas(char mas[]) {
    for (int i = 0; i < 29; i++) {
        for (int j = 0; j < 29 - i; j++) {
            if (mas[j] > mas[j + 1]) {
                swap(mas[j], mas[j + 1]);
            }
        }
    }
}

//Функция для вывод массива
void output_mas(char mas[30]) {
    for (int i = 0; i < 30; i++) {
        cout << mas[i] << " ";
    }
}