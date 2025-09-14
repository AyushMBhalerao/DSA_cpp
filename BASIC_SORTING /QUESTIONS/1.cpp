// sort this array of character using inseration in descending order 
// char ch [] = { 'f', 'b','a' ,'e','c','d'}
# include <iostream>
# include <algorithm>
using namespace std;

int main (){
    char arr [] = { 'f', 'b','a','e','c','d'};
    int n = sizeof(arr)/sizeof(char);
    
    for ( int i =1;i<n ;i++){
        int curr = arr [i];
        int prev = i-1;
        while ( prev >= 0 and arr[prev]  < curr){
            swap ( arr [prev], arr [prev+1]);
            prev --;
        }
        arr [prev +1 ] = curr ;
    }
    for ( int i =0 ; i <n ; i++ ){
        cout <<  arr [i] << " ";
    }

    return 0 ; 
}
