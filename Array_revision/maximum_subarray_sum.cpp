//The idea is to use kadane's algorithm and keep track of start and end indices which contains the subarray with
//maximum sum
//[Input: arr = [-2, -5, 6, -2, -3, 1, 5, -6] 
//[-2, -5, 6, -2, -3, 1, 5, -6]
//[-2, -5, 6, 4, 1, 2, 7, 1] -> currSum
//[-2, -2, 6, 6, 6, 6, 7, 1] -> maxSum
//Output: [6, -2, -3, 1, 5] 

#include<iostream>
using namespace std;

void Kadane(int arr[], int n) {
    int start = 0, end = start;
    int currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        if (currSum > maxSum) {
            maxSum = currSum;
            end = i;
        }
        if (currSum < 0) {
            currSum = 0;
            start = i+1;
        }
    } 
    for (int i = start; i <= end; i++) {
        cout << arr[i] <<" ";
    }
}

int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    Kadane(arr, 8);
    return 0;
}