#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void quest_7();
void firts_var();
void second_var();

int main() {
    setlocale(LC_ALL, "rus");
    quest_7();

    return 0;
}

void quest_7() {
    int choose;
    cout << "1 - first var\n2 - second var\n";
    cin >> choose;
    if (choose == 1) {
        firts_var();
    } else if (choose == 2) {
        second_var();
    } else {
        quest_7();
    }
}

void firts_var() {
    int m = 37, c = 64, S = 0;
    for (int i = 3; i < i + 100; i++) {
        S = (m * S + i) % c;
        cout << S << "\n";
    }
}

void second_var() {
    int m = 25173, c = 65537, S = 0;
    //Бесконечный цикл
    for (int i = 13849; i < i + 1; i++) {
        S = (m * S + i) % c;
        cout << S << "\n";
    }
}