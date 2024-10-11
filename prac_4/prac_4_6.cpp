#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

void quest_6();

int main() {
    setlocale(LC_ALL, "rus");
    quest_6();
    return 0;
}

void quest_6() {
    string vvod;
    int answ;
    float prior;

    cin >> vvod;

    for (int i = 0; i < sizeof(vvod); i++) {
        
    }
}

float prior(char number) {
    float prior;
    switch (number) {
        case 'I':
            prior = 0.2;
            break;
        case 'V':
            prior = 1;
            break;
        case 'X':
            prior = 2;
            break;
        case 'L':
            prior = 10;
            break;
        case 'C':
            prior = 20;
            break;
        case 'D':
            prior = 100;
            break;
        case 'M':
            prior = 200;
            break;

            return prior;
    }
}