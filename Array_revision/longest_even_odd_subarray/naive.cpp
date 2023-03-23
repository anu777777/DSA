//LONGEST EVEN ODD SUBARRAY!
//Input: a[] = {1, 2, 3, 4, 5, 7, 9} 
//Output: 5 
//The idea is to consider each and every subarray and calculate longest even odd subarray

#include<iostream>
using namespace std;

int even_odd(int arr[], int n) {
    int maxArray = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = i+1; j < n; j++) {
            if ((arr[j-1] % 2 == 0 && arr[j] % 2 != 0 )||
                (arr[j-1] % 2 != 0 && arr[j] % 2 == 0)) {
                    cnt++;
            }
            else {
                break;
            }
        }
        maxArray = max(maxArray, cnt);
    }
    return maxArray;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 9};
    cout << even_odd(arr, 7);
    return 0;
}

