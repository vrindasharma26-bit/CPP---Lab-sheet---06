
#include <iostream>
using namespace std;

int main() {
    int arr[5], search;
    int low = 0, high = 4, mid;
    int found = 0;

    cout << "Enter 5 sorted elements: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> search;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == search) {
            cout << "Element found at position " << mid + 1;
            found = 1;
            break;
        }
        else if (arr[mid] < search)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found == 0)
        cout << "Element not found";

    return 0;
}
