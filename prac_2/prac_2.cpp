#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>

using namespace std;

void quest_1();
void quest_2();
void quest_3();
void quest_4();
void quest_5();

float found_V(float R, float r, float h);
float found_S(float R, float r, float l);
int existence_trunc_cone(float R, float r, float h, float l);
float func_make(float x);
void completion_mas(float x_mas[17], float y_mas[17]);
void mas_output(float x_mas[17], float y_mas[17], int len);

int main() {
#ifdef QUEST_1
    quest_1();
#endif
#ifdef QUEST_2
    quest_2();
#endif
#ifdef QUEST_3
    quest_3();
#endif
#ifdef QUEST_4
    quest_4();
#endif
#ifdef QUEST_5
    quest_5();
#endif
    return 0;
}

void quest_1() {
    float V, S, R, r, h, l;
    cout << "R: ";
    cin >> R;

    cout << "r: ";
    cin >> r;

    cout << "h: ";
    cin >> h;

    l = sqrt((R - r) * (R - r) + h * h);

    if (existence_trunc_cone(R, r, h, l)) {
        V = found_V(R, r, h);
        S = found_S(R, r, l);
        cout << "\nV: " << V << "    S: " << S << endl;
    } else {
        cout << "The cone does not exist";
    }
}

void quest_2() {
    float x, a;
    cout << "x: ";
    cin >> x;

    cout << "a: ";
    cin >> a;

    if (abs(x) < 1 && x != 0) {
        cout << a * log(abs(x));
    } else if (abs(x) >= 1 && (a - x * x) >= 0) {
        cout << sqrt(a - x * x);
    } else {
        cout << "There are no solution";
    }
}

void quest_3() {
    float x, y, b;
    cout << "x: ";
    cin >> x;

    cout << "y: ";
    cin >> y;

    cout << "b: ";
    cin >> b;

    if ((b - x) >= 0 && (b - y) > 0) {
        cout << log(b - y) * sqrt(b - x);
    } else {
        cout << "There are no solution";
    }
}

void quest_4() {
    int N;

    cout << "N: ";
    cin >> N;

    while (1) {
        if (N > 0) {
            for (int i = N; i < N + 10; i++) {
                cout << i << " ";
            }
            break;
        } else {
            cout << N << " not a natural number!" << endl;
        }
        cout << "N: ";
        cin >> N;
    }
}

void quest_5() {
    float x_mas[17], y_mas[17];
    int len = 17;
    completion_mas(x_mas, y_mas);
    mas_output(x_mas, y_mas, len);
}

float found_V(float R, float r, float h) { return (1.0 / 3) * M_PI * h * (R * R + R * r + r * r); }

float found_S(float R, float r, float l) { return M_PI * r * r + M_PI * l * (R + r) + M_PI * R * R; }

int existence_trunc_cone(float R, float r, float h, float l) {
    return ((r < 0 && R < 0) || (r > 0 && R > 0)) && h != 0 && l != 0;
}

float func_make(float x) { return (x * x - 2 * x + 2) / (x - 1); }

void completion_mas(float x_mas[17], float y_mas[17]) {
    int i = 0;
    for (float x = -4; x <= 4; x += 0.5) {
        x_mas[i] = x;
        y_mas[i] = func_make(x);
        i++;
    }
}

void mas_output(float x_mas[17], float y_mas[17], int len) {
    cout << "x | ";
    for (int i = 0; i < len; i++) {
        cout << std::setw(4) << std::setprecision(2) << x_mas[i] << " | ";
    }
    cout << "\n----------------------------------------------------------------------------------------------"
            "----------------------------\n";
    cout << "y | ";
    for (int i = 0; i < len; i++) {
        if (x_mas[i] == 1) {
            cout << std::setw(4) << std::setprecision(2) << "n/a" << " | ";
        } else {
            cout << std::setw(4) << std::setprecision(2) << y_mas[i] << " | ";
        }
    }
}