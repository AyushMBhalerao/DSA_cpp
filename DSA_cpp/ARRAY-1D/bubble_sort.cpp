#include <iostream>
#include <utility>

using namespace std;

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int size) {
    int swap_count = 0;
    
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swap_count++;
                cout << "After swap " << swap_count << ": ";
                printArray(arr, size);
            }
        }
    }
    cout << "Final sorted list after " << swap_count << " total swaps:" << endl;
    printArray(arr, size);
}

int main() {
    int my_array[] = {3, 9, 7, 12, 11, 6, 2, 5};
    int n = sizeof(my_array) / sizeof(my_array[0]);
    
    cout << "Original array: ";
    printArray(my_array, n);
    
    bubbleSort(my_array, n);
    
    return 0;
}
