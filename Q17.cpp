
#include <iostream>
using namespace std;

int main() {
    int arr[5], number, found = 0;

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Enter number to check: ";
    cin >> number;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == number) {
            found = 1;
            break;
        }
    }

    if (found == 1)
        cout << "Number is present";
    else
        cout << "Number is not present";

    return 0;
}
