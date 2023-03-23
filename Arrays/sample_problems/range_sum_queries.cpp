#include<iostream>
using namespace std;

//arr = 4, 5, 3, 2, 5
//prefix = 4, 9, 12, 14, 19


int range_sum(int arr[], int l, int r, int n) {
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = arr[i] + prefix[i-1];
    }
    int ans = prefix[r] - prefix[l];
    return ans;
}

int equilibrium_index() {
    
}



int main() {
    int arr[] = {4, 5, 3, 2, 5};
    int l = 0, r = 3;
    int size = 5;
    cout << "The prefix sum of the elements are : ";
    cout << range_sum(arr, l, r, size);
    return 0;
}