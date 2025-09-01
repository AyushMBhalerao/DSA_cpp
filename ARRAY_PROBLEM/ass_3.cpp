#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int max_product_subarray(int *arr, int n) {
    int max_prod = INT_MIN;

    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = i; j < n; j++) {
            prod *= arr[j];
            max_prod = max(max_prod, prod);
        }
    }
    return max_prod;
}

int main() {
    int arr[] = {3, -5, -7, 8, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << "The largest product of subarray is " 
         << max_product_subarray(arr, n) << endl;
    return 0;
}

