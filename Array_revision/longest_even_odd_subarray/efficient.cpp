//Store the previous elements!
//a[] = {1, 2, 3, 4, 5, 7, 9} 
//Anyone of them should be divisble by 2
//If not ? then update the maxCount and restart counting!
#include<iostream>
using namespace std;

int evenOdd(int arr[], int n) {
    int maxCount = 1;
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i-1] % 2 != arr[i] % 2) {
            cnt++;
        }
        else {
            maxCount = max(maxCount, cnt);
            cnt = 1; //cnt should be 1.
        }
    }
    return maxCount;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 9};
    cout << evenOdd(arr, 7);
    return 0;
}