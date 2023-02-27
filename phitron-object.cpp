#include <bits/stdc++.h>
using namespace std;

class students{
public:
    string name;
    int roll;
    string fathers_name;
    string mothers_name;
    void print_all_info(){
        cout<< name<< "\n"<< roll<< "\n"<< fathers_name<< "\n"<< mothers_name<< endl;
    }
};

class rectangle{
public:
    int width;
    int hight;
    int area(){
        return width * hight;
    }
};

int main(){
//    students s1;
//    s1.name = "Towfik Sikder";
//    s1.roll = 210053;
//    s1.fathers_name = "X";
//    s1.mothers_name = "y";
////    cout<< s1.name<< "\n"<< s1.roll<< "\n"<< s1.fathers_name<< endl;
//    s1.print_all_info();
//
//    students s2;
//    s2.name = "Sakib";
//    s2.roll = 210054;
//    s2.fathers_name = "A";
//    s2.mothers_name = "B";
//    s2.print_all_info();



    rectangle r1;
    r1.width = 10;
    r1.hight = 7;
    cout<< r1.area()<< endl;

    return 0;
}
