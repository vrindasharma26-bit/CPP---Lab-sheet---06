
#include <iostream>
using namespace std;

int main() {
    int arr[5], search, count = 0;

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == search)
            count++;
    }

    cout << "Number of occurrences = " << count;

    return 0;
}
