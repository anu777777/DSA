//NAIVE PATTERN SEARCHING ALGORITHM
#include<iostream>
#include<string>
using namespace std;

void search(char* pat, char* txt) {
    int P = strlen(pat);
    int T = strlen(txt);
    for (int i = 0; i < T-P; i++) {
        int j;
        for (j = 0; j < P; j++) {
            if (pat[j] != txt[j+i])
               break;
        }
        if (j == P) {
            cout << "Pattern found at the index "<< i << endl;
        }
    }
}


int main() {
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    search(pat, txt);
    return 0;
}