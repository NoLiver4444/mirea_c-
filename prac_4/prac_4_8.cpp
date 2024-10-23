#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void quest_8();
float rev_com(float *A, float *cost);
void max_rev_com(float s1, float s2, float s3);
void min_rev_com(float s1, float s2, float s3);

int main() {
    setlocale(LC_ALL, "rus");
    quest_8();

    return 0;
}

void quest_8() {
    float A1[4] = {5, 2, 0, 10}, A2[4] = {3, 5, 2, 5}, A3[4] = {20, 0, 0, 0};
    float cost[4] = {1.2, 2.8, 5, 2}, com[4] = {0.5, 0.4, 1, 1.5};
    float s1, s2, s3, rev_all, com_all;
    cout << "rev:\n";
    s1 = rev_com(A1, cost);
    s2 = rev_com(A2, cost);
    s3 = rev_com(A3, cost);
    rev_all = s1 + s2 + s3;
    max_rev_com(s1, s2, s3);
    min_rev_com(s1, s2, s3);
    cout << "\ncom:\n";
    s1 = rev_com(A1, com);
    s2 = rev_com(A2, com);
    s3 = rev_com(A3, com);
    com_all = s1 + s2 + s3;
    max_rev_com(s1, s2, s3);
    min_rev_com(s1, s2, s3);
    cout << "\nall rev: " << rev_all << endl;
    cout << "\nall com: " << com_all << endl;
    cout << "\nall mon: " << rev_all + com_all;
}

float rev_com(float *A, float *cost) {
    float s = 0;
    for (int i = 0; i < 4; i++) {
        s += *(A + i) * *(cost + i);
    }
    return s;
}

void max_rev_com(float s1, float s2, float s3) {
    if (s1 > s2 && s1 > s3) {
        cout << "   max: 1 - " << s1 << endl;
    } else if (s2 > s1 && s2 > s3) {
        cout << "   max: 2 - " << s2 << endl;
    } else if (s3 > s1 && s3 > s2) {
        cout << "   max: 3 - " << s3 << endl;
    }
}

void min_rev_com(float s1, float s2, float s3) {
    if (s1 < s2 && s1 < s3) {
        cout << "   min: 1 - " << s1 << endl;
    } else if (s2 < s1 && s2 < s3) {
        cout << "   min: 2 - " << s2 << endl;
    } else if (s3 < s1 && s3 < s2) {
        cout << "   min: 3 - " << s3 << endl;
    }
}