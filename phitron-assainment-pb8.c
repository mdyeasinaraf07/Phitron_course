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
    int z = 0;
    if(a == 0 || b == 0){
        z = a;
    }
    else if(a % b == 0){
        z = b;
    }
    else{
        b = b / 2;
        while(a % b != 0){
            b--;
        }
        z = b;
    }
    int LCM = (x * y) / z;
    printf("The LCM of %d and %d is %d.\n", x, y, LCM);

    return 0;
}
