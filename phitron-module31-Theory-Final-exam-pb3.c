//Pointers (pointer variables) are special variables that are used to store addresses rather than values.
//
//→Pass by value:  In pass by value  the value of a function parameter is copied to another location of the memory. When accessing or modifying the variable within the function, it accesses only the copy. There is no effect on the original value.

#include <stdio.h>
int new_num(int num);

int main(){
    int num1;
    scanf("%d", &num1);
    int num2 = new_num(num1);
    printf("num1 = %d\nnum2 = %d\n", num1, num2);

    return 0;
}

int new_num(int num){
    return num += 5;
}

//→Pass by reference:  In pass by reference the memory address is passed to that function. In other words, the function gets access to the actual variable.
//
//#include <stdio.h>
//int new_num(int* num);
//
//int main(){
//    int num1;
//    scanf("%d", &num1);
//    int num2 = new_num(&num1);
//    printf("num1 = %d\nnum2 = %d\n", num1, num2);
//
//    return 0;
//}
//
//int new_num(int* num){
//    return *num += 5;
//}

