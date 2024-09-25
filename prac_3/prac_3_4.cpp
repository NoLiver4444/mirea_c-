#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void quest_4();
void input_file(ofstream &MyFile);
void output_file(ifstream &MyFile);

int main() {
    setlocale(LC_ALL, "rus");
    quest_4();
    return 0;
}

void quest_4() {
    string file;

    cout << "file: ";
    cin >> file;

    ofstream MyFile(file);

    if (MyFile.is_open()) {
        input_file(MyFile);
        MyFile.close();
        ifstream MyFile(file);
        output_file(MyFile);
    } else {
        cout << "error\n";
    }
}

void input_file(ofstream &MyFile) {
    string line;
    cout << "press ! to end\n";
    cin >> line;
    while (line != "!") {
        MyFile << line << endl;
        cout << "press ! to end\n";
        cin >> line;
    }
}

void output_file(ifstream &MyFile) {
    char line[30];
    while (MyFile.getline(line, 30)) {
        for (long long unsigned int i = 0; i < strlen(line); i++) {
            if (isdigit(line[i]) || line[i] == '.' || line[i] == '-' || line[i] == ',') {
                cout << line[i];
            }
        }
        cout << "\n";
    }
    
}