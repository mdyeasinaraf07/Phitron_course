//a)
//Ternary operator in c is a way to shorten the if-else code block in C.Ternary Operator in C takes three arguments:
//
//The first argument in the Ternary Operator in C is the comparison condition.
//The second argument in the Ternary Operator in C is the result if the condition is true.
//The third argument in the Ternary Operator in C is the result if the condition is false.

#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int max = a > b ? a : b;
    printf("%d\n", max);

    return 0;
}


//b)
//Global variable: A global variable is a variable that is accessible globally.
//Local variable: A local variable is one that is only accessible to the current scope such as temporary variables used in a single function definition.

