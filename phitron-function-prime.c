#include <stdio.h>
int isPrime(int n){
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    if(isPrime(n) == 0){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }


    return 0;
}
