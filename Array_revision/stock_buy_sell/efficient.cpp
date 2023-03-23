//PEAK VALLEY APPROACH

//We just need to find the next greater element and subtract it from the current element until we reach a minimum!

#include<iostream>
using namespace std;

int maxProfit(int arr[], int n) {
    int profit = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i-1]) {
            profit += arr[i] - arr[i-1];
        }
    }
    return profit;
}

int main() {
    int arr[] = {1, 5, 3, 8, 12}, n = 5;
    cout<<maxProfit(arr, n);
    return 0;
}