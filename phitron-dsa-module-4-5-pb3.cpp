#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;
    int i = 0;
    while(s[i] != '\0'){
        if(i % 2 == 0){
            if(s[i] == 'z'){
                s[i] = 'a';
            }
            else s[i] += 1;
        }
        i++;
    }
    cout<< s<< endl;

    return 0;
}
