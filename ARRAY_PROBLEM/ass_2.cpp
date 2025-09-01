// there is an integer array nums sorted in ascending order (with disctinct calue)
# include <iostream>
using namespace std;

int binary_sort (int *num, int target,int n){
    int st =0;
    int end = n-1;

    while (st<=end){
        int mid = st + (end-st)/2;

        if ( num[mid]==target ){
            return mid ;
        }

        if (num[st]<= num[mid]){// the sorted array is in the left side
            if ( num[st]<=target and target< num[mid]){ // it is moving towards left 
                end = mid -1; // 
            }
            else {
                st = mid+1; // target is on the right side
            }

        }
        else { // this means that the sorted array is on the right side 
            if ( num[mid]<target and target <= num[end] ){ // it suggest we need to move to right side
                st = mid+1;
            }
            else { 
                end = mid -1;  // target is on the left side 
            }

        }
    }
    return -1;

}


int main (){
    int num []= {10,12,15,2,3,5,7,9};
    int n = sizeof (num)/ sizeof(int);
    int target =5;
    int index =binary_sort (num,target,n);
    cout << " so the index of the target given is "<< index << " "<< endl;
    return 0;

 }





