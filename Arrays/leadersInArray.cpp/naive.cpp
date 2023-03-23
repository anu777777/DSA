//finding leaders in an array
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> leadersInArray(int arr[], int n) {
    vector<int>ans;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = i+1; j < n; i++) {
            if (arr[i] < arr[j])
               break;
        }
        if (j == n) {
          ans.push_back(arr[i]);
          cout << arr[i] <<" ";
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] <<" ";
    }
    return ans;
}

int main() {
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    vector<int>ans;
    ans = leadersInArray(arr, 7);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}