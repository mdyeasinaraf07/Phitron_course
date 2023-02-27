#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    printf("The factors of %d are: ", a);
    printf("1, ");
    for(int i = 2; i <= a / 2; i++){
        if(a % i == 0){
            printf("%d, ", i);
        }
    }
    printf("%d.", a);
    printf("\n");

    return 0;
}
