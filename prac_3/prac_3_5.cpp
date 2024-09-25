#include <iostream>

using namespace std;

void quest_5();
void sort_mas(char mas[30]);
void output_mas(char mas[30]);

int main() {
    quest_5();
    return 0;
}

void quest_5() {
    char mas[30];

    for (int i = 0; i < 30; i++) {
        cin >> mas[i];
    }

    sort_mas(mas);
    output_mas(mas);
}

void sort_mas(char mas[]) {
    for (int i = 0; i < 29; i++) {
        for (int j = 0; j < 29 - i; j++) {
            if (mas[j] > mas[j + 1]) {
                swap(mas[j], mas[j + 1]);
            }
        }
    }
}

void output_mas(char mas[30]) {
    for (int i = 0; i < 30; i++) {
        cout << mas[i] << " ";
    }
}