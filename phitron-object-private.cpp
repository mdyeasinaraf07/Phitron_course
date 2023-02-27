#include <bits/stdc++.h>
using namespace std;

class students{
private:
    string name;
    int age;
    int std_id;

public:
    void all_info(string n, int ag, int s_id){
        name = n;
        age = ag;
        std_id = s_id;
    }

    void print_info(){
        cout<< name<< " "<< age<< " "<< std_id<< endl;
    }
};

int main(){
    students s1;
    s1.all_info("Towfik", 21, 210053);
    s1.print_info();


    return 0;
}
