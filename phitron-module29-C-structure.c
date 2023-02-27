#include <stdio.h>
struct Frinds{
    char name[20];
    int age;
    int roll;
    float weight;
    char city[20];

};

int main(){
    struct Frinds F1 = {
        .name = "Nazmul Haque Sakib",
        .age = 21,
        .roll = 01,
        .weight = 67.56,
        .city = "Barishal Sadar",
    };
    struct Frinds F2 = {
        .name = "Maruf Rahman Jisan",
        .age = 22,
        .roll = 02,
        .weight = 74.66,
        .city = "Barishal Police line",
    };
    struct Frinds F3 = {
        .name = "Shefat Ahmed",
        .age = 21,
        .roll = 03,
        .weight = 60.25,
        .city = "Ptuakhali Sadar",
    };

    printf("Friend 1 Info: \n%s\n%d\n%d\n%.2f\n%s\n\n", F1.name, F1.age, F1.roll, F1.weight, F1.city);
    printf("Friend 2 Info: \n%s\n%d\n%d\n%.2f\n%s\n\n", F2.name, F2.age, F2.roll, F2.weight, F2.city);
    printf("Friend 3 Info: \n%s\n%d\n%d\n%.2f\n%s\n\n", F3.name, F3.age, F3.roll, F3.weight, F3.city);

    return 0;
}
