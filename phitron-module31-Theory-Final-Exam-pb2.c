#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int x = 0;
    int y = 1;
    int z = 0;
    for(int i = 0; i < n; i++){
        printf("%d", z);
        if(i != n - 1){
            printf(", ");
        }
        x = y;
        y = z;
        z = x + y;
    }
    printf("\n");

    return 0;
}

//1) Input number of Fibonacci terms from user store it in a variable say n.
//2) Declare and initialize three variables x = 0, y = 1 and z = 0.
//3) Here z is the current term, y is the n->1st term and x is n->2nd term.
//4) Run a loop from 1 to terms, increment loop counter by 1.
//5) Inside the loop copy the value of n->1st term to n->2nd term, x = y, Next copy the value of nth to n->1st term y = z.
//6) Finally compute the new term by adding previous two terms z = x + y.
//7) Print the value of current Fibonacci term z.
