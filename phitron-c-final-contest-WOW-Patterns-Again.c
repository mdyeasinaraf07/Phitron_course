#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count = 1;
    int space = n;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            for(int j = 1; j < space; j++){
                printf(" ");
            }
            for(int k = 0; k < count; k++){
                printf("^");
            }
            printf("\n");
            count += 2;
            space--;
        }
        else{
            for(int j = 1; j < space; j++){
                printf(" ");
            }
            for(int j = 0; j < count; j++){
                printf("*");
            }
            printf("\n");
            count += 2;
            space--;
        }
    }

    return 0;
}
