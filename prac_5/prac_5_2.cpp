#include <iostream>

using namespace std;

void output_mass(int *a, int n);

int main() {
    int n;
    cout << "input n: ";
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    a[1] = 0;
    int m = 2, j;
    while (m < n) {
        if (a[m] != 0) {
            j = m * 2;
            while (j < n) {
                a[j] = 0;
                j = j + m;
            }
            m += 1;
        } else {
            m += 1;
        }
    }
    output_mass(a, n);
    delete[] a;
    return 0;
}

void output_mass(int *a, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            cout << a[i] << " ";
        }
    }
}