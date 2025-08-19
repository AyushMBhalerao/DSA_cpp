// binary seach of a sorted array 
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int st = 0;
    int end = n - 1;
    
    while(st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] == key) {
        } else if (arr[mid] < key) {
             st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return -1; 
}

int main() {
    int arr[] = {4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    int key = 8;

    int result_index = binarySearch(arr, n, key);

    if (result_index != -1) {
        cout << "The index of the array that matches the value of the key is: " << result_index << std::endl;
    } else {
        cout << "Key not found in the array." << std::endl;
    }
    
    return 0;
}