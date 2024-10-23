#include <iostream>

using namespace std;

float evklid(int a, int b);

int main() {
    int a, b;
    cout << "input a: ";
    cin >> a;
    cout << "input b: ";
    cin >> b;
    cout << evklid(a, b);
    return 0;
}

float evklid(int a, int b) {
    if (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
            return evklid(a, b);
        } else {
            b = b % a;
            return evklid(a, b);
        }
    } else {
        return (a + b);
    }
}