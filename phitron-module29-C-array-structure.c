#include <stdio.h>
struct Student{
    int roll;
    int age;
    float weight;
};

int main(){
    int n = 3;
    struct Student s[n];
    for(int i = 0 ; i < n; i++){
        s[i].roll = 01 + i;
        s[i].age = 20 + (i + 1);
        s[i].weight = 61.21 + (i + 2) * 2;
    }
    for(int i = 0; i < n; i++){
        printf("Student %d Info: %d\n%d\n%f\n", i, s[i].roll, s[i].age, s[i].weight);
    }

    return 0;
}
