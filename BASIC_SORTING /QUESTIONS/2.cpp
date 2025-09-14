// use the following sorting to sort an array is descending order 
// 3,6,2,1,8,7,5,3,1
# include <iostream> 
# include <algorithm>
# include <climits> 
using namespace std;

void bubble_sort ( int *arr, int n ){
    for ( int i =0 ; i < n ; i++ ){

        for ( int j = 0 ; j < n-i-1; j++ ){

            if ( arr [j] > arr [j+1]){
                swap ( arr [j], arr [j+1]);
            }
        }
    }
    for ( int i =0 ; i < n ; i++ ){
        cout << arr [ i ] << " ";
    }
}

void selection_sort ( int *arr , int n ){

    for ( int i = 0 ; i < n ; i ++ ){

        int min_ = i;
        for ( int j = i +1 ; j<n ; j ++ ){
            if ( arr[min_] < arr [i]){
                min_ = j ;
            }
            swap ( arr [ min_] , arr [i]);
        }
    }
    for ( int i = 0 ; i < n ; i ++ ){
        cout << arr [ i ] << " ";
    }

}

void inseration ( int*arr , int n ){
      
    for ( int i = 1 ; i < n ; i++ ){
        int curr = arr [ i ];
        int prev = i-1;
        while ( prev <=0 and  arr [prev] < curr ){
            swap ( arr [ prev], arr [prev +1] );
        }
        arr[ prev+1] = curr;
    }
}

void counting ( int *arr , int n ){
    int freq [100] = {0};
    int min_ = INT_MAX;
    int max_ = INT_MIN ;

    for ( int i = 0 ; i < n ; i++ ){
      
        min_ = min ( arr[i], min_);
        max_ = min ( arr [i], max_);
    }
    for ( int i =0 ; i < n ; i++ ){
        freq[arr[i]]++;
    }

    int j =0 ;
    for ( int i = min_ ; i < max_ ; i ++ ){
        while ( freq [i]> 0 ){
            arr [j++] = i ;
            freq [ i ] -- ;
        }
    }
    
}
 

int main (){
    int arr [] = { 3,6,2,1,8,7,5,3,1};
    int n = sizeof ( arr)/ sizeof (int);
    
    int a ;
    cout << " select the number for your type of sorting  ";
    cin >> a ;
    if ( a ==1 ){
        bubble_sort( arr , n);
        }
    else if ( a == 2 ){
        selection_sort ( arr , n );
    }
    else if ( a ==3){
        inseration ( arr , n);
    }
    else if ( a== 4 ){
        counting ( arr , n);
    }
    else {
        cout << " pls  enter the valid number"; 
    }
    return 0 ; 
}