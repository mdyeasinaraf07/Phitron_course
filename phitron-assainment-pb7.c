#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int x = a;
    int y = b;
    if(a > b){
        a = a;
    }
    else{
        int temp = a;
        a = b;
        b = temp;
    }
    if(a == 0 || b == 0){
        printf("The GCD of %d and %d is %d.\n", x, y, a);
    }
    else if(a % b == 0){
        printf("The GCD of %d and %d is %d.\n", x, y, b);
    }
    else{
        b = b / 2;
        while(a % b != 0){
            b--;
        }
        printf("The GCD of %d and %d is %d.\n", x, y, b);
    }

    return 0;
}
