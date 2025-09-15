# include <iostream> 
using namespace std;

void spiral ( int arr [] [4], int n , int m ){
    int srow = 0 ;
    int scol = 0 ;
    int erow = n -1;
    int ecol = m-1 ;
   while (erow >= srow and ecol >= scol){

    // top 
    for ( int j  = scol ; j <= ecol; j ++  ){
        cout << arr [srow] [j] << " ";
    }
    // right 
    for ( int i = srow + 1 ; i <= erow ; i++ ){
        cout << arr [i] [ecol] << " ";
    }
    // bottom 
    for ( int j = ecol -1; j >=scol; j--){
        if (srow == erow ) break ;
        cout << arr [erow] [j]<< " ";
    }
    // left
    for ( int i=erow -1 ; i >=srow+1 ; i++ ){
        if ( scol== ecol ) break ;
        cout << arr [i] [scol] << " ";
    }
    srow ++ ;
    scol ++;
    erow --;
    ecol--;

   }
    
}

int main () {
   int arr[4][4] = { { 1,  3,  5,  7 },
                  { 23, 45, 65, 76 },
                  { 90, 98, 12, 76 },
                  { 11,35,65, 76 } };

    int n =4;
    int m = 4;
    spiral (arr , n ,m);
    return 0 ; 
}
