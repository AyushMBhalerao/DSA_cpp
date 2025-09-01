// given an integer array nums, return true if any value appears at least 
// twice in the array and return false if every element is distinct
# include <iostream>
using namespace std;

int main (){
    int n ;
    cout << " enter your size of the array ";
    cin >> n;
    int arr[n];
    bool t = false;

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for ( int i=0;i<n;i++ ){

        for ( int j=i+1;j<n;j++ ){
            if (arr[i]==arr[j]){
                 t = true;
            }
        }
    }
    if ( t == true ){
        cout << " true "<< " "<< endl;
    }
    else {
        cout << " false "<< " "<< endl;
    }
    return 0;
}