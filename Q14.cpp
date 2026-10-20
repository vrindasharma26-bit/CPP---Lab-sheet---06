
#include <iostream>
using namespace std;

int main() {
    int arr[5], search, found = 0;

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            cout << "Element found at position " << i + 1;
            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "Element not found";

    return 0;
}
