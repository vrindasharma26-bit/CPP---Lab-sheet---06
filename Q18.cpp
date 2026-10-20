
#include <iostream>
using namespace std;

int main() {
    int arr[5], key;
    int low = 0, high = 4, mid;
    int found = 0;

    cout << "Enter 5 sorted integers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Enter integer to search: ";
    cin >> key;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = 1;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found == 1)
        cout << "Integer found at position " << mid + 1;
    else
        cout << "Integer not found";

    return 0;
}
