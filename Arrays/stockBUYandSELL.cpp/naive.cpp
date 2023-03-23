//STOCK BUY AND SELL PROBLEM
#include<bits/stdc++.h>
using namespace std;

int maxProfit(int arr[], int n) {
    int buy = 0, sell = 0;
    int maxi = INT_MIN;
    int profit = 0;
    while (sell <= n) {
        if (arr[sell] >= maxi) {
            maxi = arr[sell];
            sell++;
        }
        else {
            profit += arr[sell-1] - arr[buy];
            buy = sell;
            maxi = arr[buy];
        }
    }
    return profit;
}

int maxProfitSimple(int arr[], int n) {
    int profit = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i-1]) {
            profit += arr[i] - arr[i-1];
        }
    }
    return profit;
}

int main() {
    int a1[] = {1, 5, 3, 8, 12};
    int a2[] = {30, 20, 10};
    int a3[] = {10, 20, 30};
    cout << maxProfit(a1, 5)<<endl;
    cout << maxProfit(a2, 3)<<endl;
    cout << maxProfit(a3, 3)<<endl;
    cout << maxProfitSimple(a1, 5)<<endl;
    cout << maxProfitSimple(a2, 3)<<endl;
    cout << maxProfitSimple(a3, 3)<<endl;
    return 0;
}