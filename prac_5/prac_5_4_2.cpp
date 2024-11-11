#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int charToValue(char c);
char valueToChar(int value);
long long convertToDecimal(const string &number, int base);
string convertFromDecimal(long long number, int base);
void output_answ(string *b, int n);

int main() {
    int oldBase = 7, newBase = 3, n;

    cout << "input n: ";
    cin >> n;
    string *a = new string[n], *b = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        long long decimalValue = convertToDecimal(a[i], oldBase);
        string newNumber = convertFromDecimal(decimalValue, newBase);
        b[i] = newNumber;
    }
    output_answ(b, n);

    return 0;
}

int charToValue(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    } else if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }
    return -1; // Неверный символ
}

char valueToChar(int value) {
    if (value >= 0 && value <= 9) {
        return '0' + value;
    } else if (value >= 10 && value <= 15) {
        return 'A' + (value - 10);
    }
    return '?'; // Неверное значение
}

long long convertToDecimal(const string &number, int base) {
    long long result = 0;
    for (size_t i = 0; i < number.size(); ++i) {
        int value = charToValue(number[number.size() - 1 - i]);
        if (value < 0 || value >= base) {
            throw invalid_argument("Неверный символ для данной системы счисления");
        }
        result += value * pow(base, i);
    }
    return result;
}

string convertFromDecimal(long long number, int base) {
    if (number == 0) return "0";
    
    string result;
    while (number > 0) {
        result += valueToChar(number % base);
        number /= base;
    }
    reverse(result.begin(), result.end());
    return result;
}

void output_answ(string *b, int n) {
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
}