// write a program to reverse array using swapping this method reduce space complexitiy 
#include <iostream>
using namespace std;

int main (){
    int arr[]= {2,3,4,5,6,7,8};
    int n =sizeof(arr)/sizeof(int);

    int start =0, end =n-1;
    while (end>start){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]= temp;
        start ++;
        end --;
    }
    for (int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }

    return 0;
}