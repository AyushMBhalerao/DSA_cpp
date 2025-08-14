// write a program to reverse the array using extra space 
#include <iostream>
using namespace std;

int main (){

    int arr []= { 4,5,6,7,8,9};
    int n = sizeof(arr)/ sizeof(int);

    int copy_array[n];

    for (int i=0;i<n;i++){
        int j=n-1-i;
        copy_array[i]=arr[j];
    }
    for (int i=0;i<n;i++){
        cout << copy_array[i]<< " ";
    }
    
    return 0;


}