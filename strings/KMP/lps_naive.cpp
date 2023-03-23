//Time complexity : O(n3)

#include<iostream>
#include<string>
using namespace std;

int longPropPreSuff(string txt, int n) {
    for (int len = n-1; len >= 1; len--) {
        bool flag = true;
        for (int i = 0; i < len; i++) {
            if (txt[i] != txt[n-len-i]) {
                flag = false;
            }
        }
        if (flag == true)
           return len;
    }
    return 0;
}

void fillLPS(string txt, int lps[]) {
    for (int i = 0; i < txt.size(); i++) {
        lps[i] = longPropPreSuff(txt,i+1);
    }
}


//Old one
int longPropPreSuff(string txt, int n) {
    
    for (int len = n-1; len > 0; len--) {
        bool flag =true;
        for (int i = 0; i < len; i++) {
            if (txt[i] != txt[n-len+i])
               flag = false;
        }
        if (flag == true)
           return len;
    }
    return 0;
}

void fillLPS(string txt, int lps[]) {
    for (int i = 0; i < txt.length(); i++) {
        lps[i] = longPropPreSuff(txt,i+1);
    }
}


int main() 
{ 
    string txt = "abacabad";int lps[txt.length()];
    fillLPS(txt,lps);
    for(int i=0;i<txt.length();i++){
        cout<<lps[i]<<" ";
    }
    
    return 0; 
} 