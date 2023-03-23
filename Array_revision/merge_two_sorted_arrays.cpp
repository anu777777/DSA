//Merge two sorted arrays!

#include<iostream>
using namespace std;

void merge(int a[], int m, int b[], int n, int result[]) {
    for (int i = 0; i < m; i++) {
        result[i] = a[i];
    }
    for (int j = 0; j < n; j++) {
        result[j+m] = b[j]; 
    }
}

int main() {
    int a[] = {1, 3, 4, 6};
    int b[] = {2, 5, 7, 8};
    int m = 4, n = 4;
    int result[m+n];
    merge(a, m, b, n, result);
    for (int i = 0; i < m+n; i++) {
        cout << result[i] <<" ";
    }
    return 0;
}

