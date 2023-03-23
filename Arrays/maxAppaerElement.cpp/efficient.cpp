//FIND ELEMENTS THAT APPERS MAX TIMES WITHIN THE RANGE
#include<bits/stdc++.h>
using namespace std;

int maximum(int left[], int right[], int n, int maxx) {
    int prefix[maxx+1];
    for (int i = 0; i < maxx+1; i++) {
        prefix[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        prefix[left[i]]++;
        prefix[right[i]+1]--;
    }
    int result = 0;
    for (int i = 1; i < maxx+1; i++) {
        prefix[i] = prefix[i-1] + prefix[i];
        if (prefix[i] > prefix[result]) {
            result = i;
        }
    }
    return result;
}

int main() {
    int left[] = {1, 2, 4};
    int right[] = {4, 5, 7};
    cout << maximum(left, right, 3, 7);
    return 0;
}