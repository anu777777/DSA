#include<iostream>
using namespace std;

int n_of_occurences(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        while (arr[i] == key) {
            count++;
            i++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    int total = n_of_occurences(arr, 7, 2);
    cout << "The total number of occurences of 2 is : " << total;
    return 0;
}