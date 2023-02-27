#include <bits/stdc++.h>
using namespace std;

int main(){


//    int a = 20, b = 13;
//    int max_num = max(a, b);
//    cout<< max_num << endl;

//    int a = 3, b = 8, c = 2, d = 4, e = 10;
//    int max_num = max({a, b, c, d, e});
//    cout<< max_num << endl;

    vector <int>a = {2, 4, 5, 3, 7, 1};
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++){
        cout<< a[i] << endl;
    }

    return 0;
}
