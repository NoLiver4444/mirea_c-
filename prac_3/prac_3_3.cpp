#include <iostream>
#include <fstream>

using namespace std;

void quest_3();
void output_file(ifstream &in);

int main() {
    setlocale(LC_ALL, "rus");
    quest_3();
    return 0;
}

void quest_3() {
    string file;

    cout << "file: ";
    cin >> file;

    ifstream in(file);

    if (in.is_open()) {
        output_file(in);
        in.close();
    } else {
        cout << "error\n";
    }
}

void output_file(ifstream &in) {
    string line;
    while (getline(in, line)) {
        cout << line << endl;
    }
    
}