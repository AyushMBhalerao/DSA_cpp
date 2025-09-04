# include <iostream>
# include <algorithm>
using namespace std;

int main (){
    int arr[] = {9,8,7,6,5,4,3,2};
    int n = sizeof(arr)/sizeof(int);

    for ( int i=0;i<n-1;i++ ){
          int min_ = i;
 

        for ( int j=i+1;j<n;j++){     
            if (arr[j]< arr[min_]){
                min_ =j ;
            } 
        }
        swap ( arr[i], arr[min_]);
    }
    for ( int i=0; i<n;i++ ){
        cout << arr[i]<< " ";
    }

    return 0;

}