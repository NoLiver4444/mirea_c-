#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;

void quest_5();
void output_graph(char graph[21][60]);

int main() {
    setlocale(LC_ALL, "rus");
    quest_5();
    return 0;
}

void quest_5() {
    char graph[21][60];
    double x = 0;
    int y;

    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 60; j++) {
            graph[i][j] = '.';
        }
    }

    graph[0][29] = '^';
    graph[10][59] = '>';

    for (int i = 1; i < 21; i++) {
        graph[i][29] = '|';
    }

    for (int j = 1; j < 59; j++) {
        graph[10][j] = '-';
    }

    for (int i = 0; i < 30; i++) {
        x += 0.25;
        y = floor(sin(x) * 10);
        graph[10 - y][29 + i + 1] = '*';
    }

    x = 0;

    for (int i = 0; i < 30; i++) {
        x -= 0.25;
        y = floor(sin(x) * 10);
        graph[10 - y][29 - i - 1] = '*';
    }

    output_graph(graph);
}

void output_graph(char graph[21][60]) {
    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 60; j++) {
            cout << graph[i][j];
        }
        cout << "\n";
    }
}