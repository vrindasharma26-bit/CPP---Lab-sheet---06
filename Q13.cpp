
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5];

    cout << "Enter 5 student names:\n";
    for (int i = 0; i < 5; i++)
        cin >> name[i];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (name[j] > name[j + 1]) {
                string temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }

    cout << "Names in alphabetical order:\n";
    for (int i = 0; i < 5; i++)
        cout << name[i] << endl;

    return 0;
}
