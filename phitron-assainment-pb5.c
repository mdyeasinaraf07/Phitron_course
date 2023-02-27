#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n != 0){
        printf("%d", n);
        if(n != 1){
            printf(", ");
        }
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n--;
        }
    }
    printf("\n");

    return 0;
}
