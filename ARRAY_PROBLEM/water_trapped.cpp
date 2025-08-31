    # include <iostream>
    # include <algorithm>
    # include <climits>
    using namespace std;

    int main (){
        int heights []= { 4,2,0,6,3,2,5};
        int n = sizeof(heights)/sizeof(int);

        int left_max [n];
        left_max[0]= heights[0];
        for ( int i=1;i<n;i++ ){
            left_max[i]= max(left_max[i-1],heights[i]);
        }
        int right_max [n];
        right_max[n-1]=heights[n-1];
        for ( int i=n-2;i>=0;i-- ){
            right_max[i]= max(right_max[i+1],heights[i]);

        }
        int water =0;
        int water_each;
        for (int i=0;i<n;i++){
            water_each = min(left_max[i],right_max[i])- heights[i];
            if (water_each<0){
                water =0;
            }
            water+= water_each;
        }
        cout << "So water trapped  is " << " "<< water << endl;
        return 0;
    }