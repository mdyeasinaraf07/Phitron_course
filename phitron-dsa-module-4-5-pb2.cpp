#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    int multiply = 1;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
        if(i % 2 != 0){
            multiply *= v[i];
        }
    }
    cout<< multiply<< endl;


    return 0;
}
