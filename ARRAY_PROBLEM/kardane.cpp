# include <iostream>
# include <algorithm>
# include <climits>
using namespace std;

int main (){
    int arr []= { 2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    int sum =0;
    int max_sum = INT_MIN;
    for ( int i=0;i<n;i++ ){

        sum += arr[i];

        max_sum = max (max_sum,sum);
        
        if ( sum < 0){
            sum = 0;
        }

    }
    cout << "So the maximum value of the subarray is " << " "<< max_sum << endl;

    return 0;

}
