#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n == 2){
        printf("Prime\n");
    }
    else if(n % 2 == 0){
        printf("Composite\n");
    }
    else{
        int count = 0;
        for(int i = 3; i <= n / 2; i++){
            if(n % i == 0){
                count = 1;
                break;
            }
        }
        if(count > 0){
            printf("Composite\n");
        }
        else{
            printf("Prime\n");
        }
    }

    return 0;
}
