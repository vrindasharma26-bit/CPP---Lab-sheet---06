
#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], diff[2][2];

    cout << "Enter first matrix: ";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];

    cout << "Enter second matrix: ";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> b[i][j];

    cout << "Difference of matrices:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            diff[i][j] = a[i][j] - b[i][j];
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
