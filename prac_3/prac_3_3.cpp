#include <iostream>
#include <fstream>

using namespace std;

//Прототипы функций
void quest_3();
void output_file(ifstream &in);

int main() {
    setlocale(LC_ALL, "rus");
    quest_3();
    return 0;
}

void quest_3() {
    string file;

    //Ввод названия файла
    cout << "file: ";
    cin >> file;

    ifstream in(file);

    //Проверка открытия файла
    if (in.is_open()) {
        //Вывод файла
        output_file(in);
        in.close();
    } else {
        cout << "error\n";
    }
}

//Функция для вывод файла
void output_file(ifstream &in) {
    string line;
    while (getline(in, line)) {
        cout << line << endl;
    }
    
}