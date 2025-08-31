#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int prices[] = {7, 4, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    int selling[n];
    selling[0] = prices[0];  
    
    for (int i = 1; i < n; i++) {
        selling[i] = min(prices[i-1], selling[i-1]);
    }

    int profit[n];
    int max_profit = INT_MIN;

    for (int i = 0; i < n; i++) {
        profit[i] = prices[i] - selling[i];
        max_profit = max(max_profit, profit[i]);
    }

    cout << "The maximum profit to be made is " << max_profit << endl;

    return 0;
}
