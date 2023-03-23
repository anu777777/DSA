//MAXIMUM DIFFERENCE AMONG THE PAIRS IN THE ARRAY

#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n) {
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int diff = arr[j] - arr[i];
            maxi = max(maxi, diff);
        }
    }
    return maxi;
}

int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    cout << maxDiff(arr, 7);
    return 0;
}