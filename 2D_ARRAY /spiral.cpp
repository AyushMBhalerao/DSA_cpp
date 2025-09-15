#include <iostream>
#include <vector>
using namespace std;

void spiral(vector<vector<int>> &arr, int n, int m) {
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while (erow >= srow && ecol >= scol) {
        // top
        for (int j = scol; j <= ecol; j++)
            cout << arr[srow][j] << " ";
        // right
        for (int i = srow + 1; i <= erow; i++)
            cout << arr[i][ecol] << " ";
        // bottom
        for (int j = ecol - 1; j >= scol; j--) {
            if (srow == erow) break;
            cout << arr[erow][j] << " ";
        }
        // left
        for (int i = erow - 1; i >= srow + 1; i--) {
            if (scol == ecol) break;
            cout << arr[i][scol] << " ";
        }

        srow++; scol++;
        erow--; ecol--;
    }
}

int main() {
    vector<vector<int>> arr = { { 1,  3,  5,  7 },
                                { 23, 45, 65, 76 },
                                { 90, 98, 12, 76 },
                                { 11, 35, 65, 76 } };

    spiral(arr, 4, 4);
    return 0;
}
