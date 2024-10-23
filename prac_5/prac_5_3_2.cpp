#include <iostream>
#include <fstream>
#include <unordered_map>
#include <cctype>

using namespace std;

void count_char(ifstream &MyFile, unordered_map<char, int> &charCount);
void min_count(unordered_map<char, int> charCount);
int check(char ch);

int main() {
    string file;
    unordered_map<char, int> charCount = {};

    cout << "file: ";
    cin >> file;

    ifstream MyFile(file);

    if (MyFile.is_open()) {
        count_char(MyFile, charCount);
        min_count(charCount);
        MyFile.close();
        ifstream MyFile(file);
    } else {
        cout << "error\n";
    }
    return 0;
}

void count_char(ifstream &MyFile, unordered_map<char, int> &charCount) {
    char ch;
    while (MyFile.get(ch)) {
        if (isprint(ch) && check(tolower(ch))) {
            charCount[ch]++;
        }
    }
}

void min_count(unordered_map<char, int> charCount) {
    int min = 0, count = 0;
    char min_char = '0';
    for (const auto &pair : charCount) {
        if (count == 0) {
            min = pair.second;
            min_char = pair.first;
            count++;
        } else if (pair.second < min) {
            min = pair.second;
            min_char = pair.first;
        }
    }
    cout << min_char << " - " << min;
}

int check(char ch) {
    int answ = 0;
    if (ch == 'a' || ch == 'e' || ch == 'u' || ch == 'o' || ch == 'y' || ch == 'i') {
        answ = 1;
    }
    return answ;
}