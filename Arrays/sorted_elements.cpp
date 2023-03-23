//CHECK IF ALL THE ELEMENTS IN THE ARRAY ARE SORTED OR NOT

#include<bits/stdc++.h>
using namespace std;

bool checkSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1])
           return false;
    }
    return true;
}

int main() {
    int a1[] = {0, 1, 2, 3, 4};
    int a2[] = {5, 4, 6, 7};
    cout << checkSort(a1, 5);
    cout << checkSort(a2, 5);
    return 0;
}