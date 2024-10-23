#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

//Прототипы функций
void quest_4();

int main() {
    setlocale(LC_ALL, "rus");
    quest_4();
    return 0;
}

void quest_4() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            cout << "*";
        }
        for (int j = 0; j < 18; j++) {
            cout << "_";
        }
        cout << "\n";
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 26; j++) {
            cout << "_";
        }
        cout << "\n";
    }
}