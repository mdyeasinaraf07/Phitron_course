#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    cout<< n << ' ';
    if(n % 2 != 0){
        while(n != 1){
            if(n % 2 == 0){
                n /= 2;
                cout<< n << ' ';
            }
            else{
                n = (n * 3) + 1;
                cout<< n << ' ';
            }
        }
        cout<< "\n";
    }
    else{
        n /= 2;
        cout<< n << endl;
    }


    return 0;
}
