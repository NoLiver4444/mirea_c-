#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>

using namespace std;

void quest_1();
double monthly_payment(double S, double p, double n);
void check_vvod(double *per, string text);

int main() {
    quest_1();
    return 0;
}

void quest_1() {
    double S, p, n, answ;

    check_vvod(&S, "S: ");
    check_vvod(&p, "p: ");
    check_vvod(&n, "n: ");

    answ = monthly_payment(S, p, n);

    if (answ == -999999) {
        cout << "error";
    } else {
        cout << answ;
    }
}

double monthly_payment(double S, double p, double n) {
    double r = p / 100.0;
    if ((pow(1 + r, n) - 1) != 0) {
        return (S * r * pow(1 + r, n)) / (12.0 * (pow(1 + r, n) - 1));
    } else {
        return -999999;
    }
}

void check_vvod(double *per, string text) {
    double a;
    cout << text;
    cin >> a;
    while (cin.fail() || a <= 0) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << text;
        cin >> a;
    }
    *per = a;
}