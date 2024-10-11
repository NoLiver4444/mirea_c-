#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;

//Прототипы функций
void quest_2();
int check_znak(double number);
void check_vvod(double *per, string text);


int main() {
    setlocale(LC_ALL, "rus");
    quest_2();
    return 0;
}

void quest_2() {
    double number;
    check_vvod(&number, "Number: ");
    cout << check_znak(number);
}

int check_znak(double number) {
    if (number > 0) {
        return 1;
    } else if (number == 0) {
        return 0;
    } else {
        return -1;
    }
}

void check_vvod(double *per, string text) {
    double a;
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