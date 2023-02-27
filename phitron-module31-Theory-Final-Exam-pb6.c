//1--> No argument passed and no return value:
#include <stdio.h>
void even_odd();

int main(){
    even_odd();

    return 0;
}

void even_odd(){
    int n;
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}


//2--> No arguments passed but returns a value:
//#include <stdio.h>
//int even_odd();
//
//int main(){
//    int valuee = even_odd();
//    if(valuee == 1){
//        printf("Even\n");
//    }
//    else{
//        printf("Odd\n");
//    }
//
//    return 0;
//}
//
//
//int even_odd(){
//    int n;
//    scanf("%d", &n);
//    if(n % 2 == 0){
//        return 1;
//    }
//    else{
//        return 0;
//    }
//}
//
//
// 3--> Argument Passed But No Return Value:
//#include <stdio.h>
//void even_odd(int n);
//
//int main(){
//    int n;
//    scanf("%d", &n);
//    even_odd(n);
//
//    return 0;
//}
//
//void even_odd(int n){
//    if(n % 2 == 0){
//        printf("Even\n");
//    }
//    else{
//        printf("Odd\n");
//    }
//}
//
//
//
//4--> Argument Passed and Returns a Value:
//#include <stdio.h>
//int even_odd(int n);
//
//int main(){
//    int n;
//    scanf("%d", &n);
//    int valuee = even_odd(n);
//    if(valuee == 1){
//        printf("Even\n");
//    }
//    else{
//        printf("Odd\n");
//    }
//
//    return 0;
//}
//
//
//int even_odd(int n){
//    if(n % 2 == 0){
//        return 1;
//    }
//    else{
//        return 0;
//    }
//}


//Benefits of using user-defined functions:
//1--> Reduction in program size.
//2--> Reducing complexity of program.
//3--> Easy to debug and maintain.
//4--> Readability of the program.
//5--> Code reusability.




