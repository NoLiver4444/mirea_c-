#include <iostream>
#include <fstream>

using namespace std;

void input_file(ofstream &MyFile, float *average);
void count_pep(ifstream &MyFile, int *people_count, float average);

int main() {
    float average;
    int people_count = 0;

    ofstream MyFile("asdf.txt");

    //Проверка открытия файла
    if (MyFile.is_open()) {
        //Записываем значения в файл
        input_file(MyFile, &average);
        MyFile.close();
        ifstream MyFile("asdf.txt");
        count_pep(MyFile, &people_count, average);
        cout << "average: " << average << endl;
        cout << "people count " << people_count;
        MyFile.close();
    } else {
        cout << "error\n";
    }
    return 0;
}

void input_file(ofstream &MyFile, float *average) {
    float height, sum = 0;
    int count = 0;
    cout << "-> ";
    cin >> height;
    while (height != 0) {
        sum += height;
        count += 1;
        MyFile << height << endl;
        cout << "-> ";
        cin >> height;
    }
    *average = sum / count;
}

void count_pep(ifstream &MyFile, int *people_count, float average) {
    float number;
    while (MyFile >> number) {
        if (number > average) {
            *people_count += 1;
        }
    }
}