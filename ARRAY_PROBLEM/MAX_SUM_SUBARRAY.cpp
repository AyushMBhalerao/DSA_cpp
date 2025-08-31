// write a program to find the maxiumum sum of the subarray 
// brute force approach
 # include <iostream>
 # include <climits>
 # include <algorithm>
 using namespace std;

 int  max_sum_subarray (int *arr, int n){
        int max_sum=INT_MIN;

   for (int i=0; i<n ; i++ ){

    for (int j=i ;j<n ; j++){
                int sum = 0;

        for (int k=i;k<=j;k++){
            sum +=arr[k];
        }
        max_sum= max(max_sum, sum );// this is the fuction in the algorithim library which find the larger integer form two given integer
        
    }
   }
           return max_sum;

 }
 int main (){
    int arr []= {3,-5,-7,8,5};
    int n = sizeof(arr)/ sizeof(int);
    cout << " The largest value of the subarray is " << " "<< max_sum_subarray(arr,n) << " "<< endl;;
    return 0;
    
 }
