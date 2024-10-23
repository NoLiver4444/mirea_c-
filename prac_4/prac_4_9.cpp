#include <math.h>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void quest_9();
int first(int before, string number);
int second(int after, string number);
int translation(char a);

int main() {
    setlocale(LC_ALL, "rus");
    quest_9();

    return 0;
}

void quest_9() {
    int before, after;
    string number;
    cout << "initial basis: ";
    cin >> before;
    cout << "\ninput number: ";
    cin >> number;
    cout << "\nfinal basis: ";
    cin >> after;
    if (after == 10) {
        cout << first(before, number);
    } else if (before == 10) {
        cout << second(after, number);
    } else {
        int numb = first(before, number), count = 0, answ = 0;
        while (numb > 0) {
            answ = (numb % after) * pow(10, count) + answ;
            count++;
            numb = numb / after;
        }
        cout << answ;
    }
}

int first(int before, string number) {
    int len = number.length() - 1, l = number.length();
    int answ = 0, numb;
    for (int i = 0; i < l; i++) {
        numb = translation(number[i]);
        answ += numb * pow(before, len);
        len--;
    }
    return answ;
}

int second(int after, string number) {
    int len = number.length() - 1, l = number.length(), numb = 0, answ = 0, count = 0;
    for (int i = 0; i < l; i++) {
        numb += translation(number[i]) * pow(10, len);
        len--;
    }
    while (numb > 0) {
        answ = (numb % after) * pow(10, count) + answ;
        count++;
        numb = numb / after;
    }
    return answ;
}

int translation(char a) {
    int answ;
    switch (a) {
        case '0':
            answ = 0;
            break;
        case '1':
            answ = 1;
            break;
        case '2':
            answ = 2;
            break;
        case '3':
            answ = 3;
            break;
        case '4':
            answ = 4;
            break;
        case '5':
            answ = 5;
            break;
        case '6':
            answ = 6;
            break;
        case '7':
            answ = 7;
            break;
        case '8':
            answ = 8;
            break;
        case '9':
            answ = 9;
            break;
        case 'A':
            answ = 10;
            break;
        case 'B':
            answ = 11;
            break;
        case 'C':
            answ = 12;
            break;
        case 'D':
            answ = 13;
            break;
        case 'E':
            answ = 14;
            break;
        case 'F':
            answ = 15;
            break;
    }
    return answ;
}