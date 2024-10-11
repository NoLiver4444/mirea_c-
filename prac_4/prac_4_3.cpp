#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;

//Прототипы функций
void quest_3();
void check_vvod(double *per, string text);
void Rectangle();
void Triangle();
void Circle();

int main() {
    setlocale(LC_ALL, "rus");
    quest_3();
    return 0;
}

void quest_3() {
    int choose;
    cout << "Rectangle - 1\nTriangle  - 2\nCircle    - 3\npress -1 to stop\n";
    cin >> choose;
    while (choose != -1) {
        switch (choose)
        {
        case 1:
            Rectangle();
            break;
        case 2:
            Triangle();
            break;
        case 3:
            Circle();
            break;
        }
        cin >> choose;
    }
}

void Rectangle() {
    double a, b;

    check_vvod(&a, "a: ");
    check_vvod(&b, "b: ");

    cout << a * b << endl;
}

void Triangle() {
    double h, b;

    check_vvod(&h, "h: ");
    check_vvod(&b, "b: ");

    cout << h * b / 2 << endl;
}

void Circle() {
    double r;

    check_vvod(&r, "r: ");

    cout << 3.14 * r * r << endl;
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