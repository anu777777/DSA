//TOWER OF HANOI
//A recurise problem, where 3 rods will be given
//Rod 1 : contains n items(source rod)
//Rod 2 : container rod
//Rod 3: destination rod
//Transfer n items from source to destination given some conditions

#include<bits/stdc++.h>
using namespace std;

void TOH(int n, char A, char B, char C) {
    if (n == 1) {
        cout << n << " is transferred from " << A <<" to "<<C<<endl;
        return;
    }
    TOH(n-1, A, C, B);
    cout << n << " is transferred from " << A <<" to "<< C <<endl;
    TOH(n-1, B, A ,C);
}

int main() {
    TOH(3, 'A', 'B', 'C');
    return 0;
}