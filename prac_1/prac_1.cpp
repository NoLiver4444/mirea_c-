#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

void quest_1();
void quest_2();
void quest_3();
void quest_4();
void quest_5();

int main() {
    quest_5();
    return 0;
}

void quest_1() {
    cout << "Dima" << endl;
}

void quest_2() {
    float a, b;
    cin >> a >> b;
    cout << a + b << " " << a - b << " " << a * b;
    if (b != 0) {
        cout << " " << a / b << endl;
    } else {
        cout << " " << "error" << endl;
    }
}

void quest_3() {
    float b, c;
    cin >> b >> c;
    if (b == 0) {
        cout << "infinite number of solutions" << endl;
    } else {
        cout << -c / b << endl;
    }
}

void lin_func(float b, float c) {
    if (b == 0) {
        cout << "infinite number of solutions" << endl;
    } else {
        cout << -c / b << endl;
    }
}

void quad_func(float a, float c) {
    if (c > 0) {
        cout << "there are no solutions" << endl;
    } else if (a == 0) {
        cout << "infinite number of solutions" << endl;
    } else {
        cout << sqrt(c / a) << endl;
    }
}

void discr(float a, float b, float c) {
    float D = b * b - 4 * a * c;
    if (D > 0) {
        cout << (-b + sqrt(D)) / (2 * a) << " " << (-b - sqrt(D)) / (2 * a) << endl;
    } else if (D == 0) {
        cout << -b / (2 * a) << endl;
    } else {
        cout << "there are no solutions" << endl;
    }
}

void quest_4() {
    float a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
        lin_func(b, c);
    } else if (b == 0) {
        quad_func(a, c);
    } else {
        discr(a, b, c);
    }
}

void quest_5() {
    char day[4], shtor[4], lamp[4];
    cout << "Today is the day (yes/no)?: ";
    cin >> day;

    cout << "The curtains are open (yes/no)?: ";
    cin >> shtor;

    cout << "Lamp on (yes/no)?: ";
    cin >> lamp;

    if (strcmp(day, "yes") == 0 && strcmp(shtor, "yes") == 0) {
        cout << "\nThe room is bright" << endl;
    } else if (strcmp(lamp, "yes") == 0) {
        cout << "\nThe room is bright" << endl;
    } else {
        cout << "\nThe room is dark" << endl;
    }
}