//FINDING MAXIMUM DIFFRENCE BETWEEN THE PAIRS
#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n) {
    int minVal = arr[0];
    int result = INT_MIN;
    for (int i = 1; i < n; i++) {
        result = max(result, arr[i] - minVal);
        minVal = min(minVal, arr[i]);
    }
    return result;
}

int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    cout << maxDiff(arr, 7);
    return 0;
}