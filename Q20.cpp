
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int low = 0, high = 4, mid;

    cout << "Enter 5 sorted elements: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    while (low < high) {
        mid = (low + high + 1) / 2;

        if (arr[mid] > arr[mid - 1])
            low = mid;
        else
            high = mid - 1;
    }

    cout << "Largest element = " << arr[low];

    return 0;
}
