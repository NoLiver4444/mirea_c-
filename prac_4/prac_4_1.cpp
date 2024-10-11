#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;

//Прототипы функций
void quest_1();
void input_file(ofstream &MyFile);
int sum_found(ifstream &MyFile);
void check_vvod(int *per, string text);


int main() {
    setlocale(LC_ALL, "rus");
    quest_1();
    return 0;
}

void quest_1() {
    string file;

    //Ввод названия файла
    cout << "file: ";
    cin >> file;

    ofstream MyFile(file);

    //Проверка открытия файла
    if (MyFile.is_open()) {
        //Записываем значения в файл
        input_file(MyFile);
        MyFile.close();
        ifstream MyFile(file);
        //Вывод файла
        cout << sum_found(MyFile);
    } else {
        cout << "error\n";
    }
}

//Функция для ввода знайчений в файла
void input_file(ofstream &MyFile) {
    int number;
    for (int i = 0; i < 10; i++) {
        check_vvod(&number, "Number: ");
        MyFile << number << endl;
    }
}

//Функция для вывод файла
int sum_found(ifstream &MyFile) {
    int sum = 0;
    int number;
    string line;
    while (MyFile >> number) {
        sum += number;
    }
    return sum;
}

void check_vvod(int *per, string text) {
    int a;
    cout << text;
    cin >> a;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << text;
        cin >> a;
    }
    *per = a;
}