#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>

using namespace std;

void quest_2();
double monthly_payment(double S, double n, double r);
void check_vvod(double *per, string text);

int main() {
    quest_2();
    return 0;
}

void quest_2() {
    double S, m, n, r = 0.0001, m_temp = 0;

    check_vvod(&S, "S: ");
    check_vvod(&m, "m: ");
    check_vvod(&n, "n: ");

    while (m_temp <= m) {
        m_temp = monthly_payment(S, n, r);
        if (m_temp == m) {
            break;
        }
        r += 0.0001;
    }

    cout << r * 100;
}

double monthly_payment(double S, double n, double r) {
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