#include <iostream>
#include <fstream>
#include <unordered_map>
#include <cctype>

using namespace std;

int check_number(string number);

struct Contacts
{
    string surname;
    string phone_number;
};


int main() {
    int n;
    cout << "number of friends: ";
    cin >> n;
    ofstream File("phone.txt"), File_S("phone_s.txt");
    string surname, number;
    vector<Contacts> phone = {};
    vector<Contacts> phone_s = {};
    Contacts contact;
    for (int i = 0; i < n; i++) {
        cout << "surname: ";
        cin >> surname;
        cout << "phone number: ";
        cin >> number;
        contact = {surname, number};
        if (check_number(number) == 1) {
            phone_s.push_back(contact);
        } else {
            phone_s.push_back(contact);
        }
    }
}

int check_number(string number) {
    int len = 10, sum_l = 0, sum_r = 0;
    for (int i = 0; i < 5; i++) {
        sum_l += static_cast<int>(number[i]);
        sum_r += static_cast<int>(number[len - i]);
    }
    if (sum_l == sum_r) {
        return 1;
    }
    return 0;
}