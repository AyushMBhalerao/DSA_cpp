#include <iostream>
using namespace std;

int main() {
    int m = 3, n = 4;

    int arr[m][n];

    // input
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];   // use i, j here
        }
    }

    // output
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout <<  arr[i][j] << " ";   // use i, j here
        }
        cout << endl;
    }

    return 0;
}
