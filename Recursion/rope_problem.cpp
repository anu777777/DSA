//FINDING MAXIMUM NUMBER OF PIECES IN A ROPE USING THE GIVEN LENGTH OF CUT
#include<bits/stdc++.h>
using namespace std;

int maxPieces(int num, int a, int b, int c) {
    if (num == 0) {
        return 1;
    }
    else if (num < 0) {
        return -1;
    }
    int res = max(
        maxPieces(num-a, a, b, c),
        max(maxPieces(num-b, a, b, c),
        maxPieces(num-c, a, b, c)));
    if (res == -1)
      return -1;
    return res + 1;
}

int main() {
    int num = 23;
    int a = 11;
    int b = 9;
    int c = 12;
    cout << maxPieces(num, a, b, c);
    return 0;
}