#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int charToValue(char c);
char valueToChar(int value);
long long convertToDecimal(const string &number, int base);
string convertFromDecimal(long long number, int base);

int main() {
    string number;
    int oldBase, newBase;

    cout << "input number: ";
    cin >> number;
    cout << "old foundation (2-16): ";
    cin >> oldBase;
    cout << "new foundation (2-16): ";
    cin >> newBase;

    try {
        long long decimalValue = convertToDecimal(number, oldBase);
        string newNumber = convertFromDecimal(decimalValue, newBase);
        cout << "answer: " << newNumber << endl;
    } catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    }

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
