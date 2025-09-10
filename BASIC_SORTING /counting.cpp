# include <iostream>
# include <algorithm>
# include <climits>
using namespace std;

void counting_sort (int *arr, int n){
    int fre [1000]= {0};
    int min_ = INT_MAX ;
    int max_ = INT_MIN ;
    
    for (int i=0; i<n; i++){
        min_ = min(min_,arr[i]);
        max_ = max(max_,arr[i]);

    }

    for (int i=0;i<n;i++){
        fre[arr[i]]++;
    }
            int j=0;

    for(int i= min_; i<=max_;i++){
        while (fre[i]>0){
            arr[j++]=i;
            fre[i]--;
        }
    }
    for (int i =0; i<n;i++){
        cout << arr[i]<< " ";
    }
}

int main (){
    int arr []= {1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);
    counting_sort(arr,n);
    return 0;

}