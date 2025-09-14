// inbuilt sortng
# include <iostream>
# include <algorithm>
using namespace std;

int main (){
    int arr []= { 4,2,3,4,6,4,7,9,5};
    int n = sizeof(arr)/sizeof(int);
    sort( arr ,arr+8);
    for (int i =0; i<n;i++ ){
        cout << arr[i] << " ";
    }
    return 0; 
}