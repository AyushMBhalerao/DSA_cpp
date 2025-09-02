// find the maxiumum product of hte subarray 
# include <iostream>
# include <algorithm>
# include <climits>
using namespace std;

int maxProduct ( int *num,int n){
    int MaxProduct= num[0];
    int MinProduct = num[0];
    int ans = MaxProduct;

    for (int i=1;i<n;i++ ){
        int current = num[i];
        MaxProduct= max (current , max (current*MaxProduct,current*MinProduct));
        MinProduct= min (current , min (current*MinProduct,current*MaxProduct) );
        ans =  max (ans,MaxProduct);

    }
    return ans;
}
int main (){
    int n;
    cout << " enter the size of the array ";
    cin >> n;
    int num [n];

    for ( int i =0; i <n; i++ ){
        cin >> num[i];
    }
    int m = maxProduct(num, n);
    cout <<" the maxium product of the subarray is "<< m << " "<< endl;
    return 0;

}