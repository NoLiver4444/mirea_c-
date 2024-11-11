#include <iostream>
#include <fstream>
#include <unordered_map>
#include <cctype>

using namespace std;

void count_char(ifstream &MyFile, unordered_map<char, int> &charCount);
void max_count(unordered_map<char, int> charCount);

int main() {
    string file;
    unordered_map<char, int> charCount = {};

    cout << "file: ";
    cin >> file;

    ifstream MyFile(file);

    if (MyFile.is_open()) {
        count_char(MyFile, charCount);
        max_count(charCount);
        MyFile.close();
    } else {
        cout << "error\n";
    }
    return 0;
}

void count_char(ifstream &MyFile, unordered_map<char, int> &charCount) {
    char ch;
    while (MyFile.get(ch)) {
        if (isprint(ch)) {
            charCount[ch]++;
        }
    }
}

void max_count(unordered_map<char, int> charCount) {
    int max = 0;
    char max_char = '0';
    for (const auto& pair : charCount) {
        if (pair.second > max) {
            max = pair.second;
            max_char = pair.first;
        }
    }
    cout << max_char << " - " << max;
}