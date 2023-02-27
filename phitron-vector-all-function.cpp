#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a;
    int n = 10;
    for(int i = 0 ; i < n; i++){
        a.push_back(i);
        cout<< "Size: " << a.size() << " --> ";
        cout<< a[i] << endl;
    }

    cout<< "Insert 200 in array a[3]:" << "\n";
    a.insert(a.begin() + 3, 200);
    for(int i = 0; i < n; i++){
        cout<< a[i] << "\n";
    }

    cout<< "Delete 3 in array a:" << "\n";
    a.erase(a.begin() + 4);
    for(int i = 0; i < n; i++){
        cout<< a[i] << "\n";
    }

    cout<< "After resize: " << "\n";
    a.resize(15);
    for(int i = 0; i < 15; i++){
        cout<< a[i] << "\n";
    }


    return 0;
}
