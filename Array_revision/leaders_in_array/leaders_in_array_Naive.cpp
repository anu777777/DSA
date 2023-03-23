#include<iostream>
#include<vector>
using namespace std;

void leaders(int arr[], int n) {
    vector<int>lead;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i])
               break;
        }
        if (j == n) {
            cout << arr[i] <<" ";
        }
    }
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    leaders(arr, 5);
    return 0;
}