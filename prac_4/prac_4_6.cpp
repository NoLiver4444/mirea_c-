#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int romanToInt(const string &s);
void quest_6();

int main() {
    setlocale(LC_ALL, "rus");
    quest_6();

    return 0;
}

void quest_6() {
    string roman;

    cout << "Введите римскую цифру: ";
    cin >> roman;

    int arabic = romanToInt(roman);
    cout << "Арабское число: " << arabic << std::endl;
}

int romanToInt(const string &s) {
    unordered_map<char, int> romanMap = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                                         {'C', 100}, {'D', 500}, {'M', 1000}};

    int total = 0;
    int prevValue = 0;

    for (char c : s) {
        int currentValue = romanMap[c];

        if (currentValue > prevValue) {
            total += currentValue - 2 * prevValue;
        } else {
            total += currentValue;
        }

        prevValue = currentValue;
    }

    return total;
}