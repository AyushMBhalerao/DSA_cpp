# include <iostream>
using namespace std;

void insertion (int *arr,int n ){
    for (int i=1;i<n;i++ ){
        int curr = arr[i];

        for(int j=i-1;j>=0;j--){
            if (arr[j]>curr){
                swap(arr[j+1],arr[j]);
            }

        }

    }

    for (int i =0; i<n;i++){
    cout << arr[i] << " ";
    }

}


int main (){

    int arr []= {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    insertion (arr,n);
    return 0;


}