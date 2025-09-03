# include <iostream>
# include <algorithm>
using namespace std;

int main (){
    int arr []= { 5,4,3,2,1 };
    int n = sizeof(arr)/sizeof(int);
    
    for (int i=0;i<n-1;i++){
        
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap (arr[j+1],arr[j]);
            }
        }
    }
    for (int i =0;i<n;i++){
        cout << arr[i]<< " ";
    }
}