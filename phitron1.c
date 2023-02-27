#include <stdio.h>
int main(){
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if(a > b){
        long long int result = a - b;
        printf("%lld\n", result);
    }
    else{
        long long int result = b - a;
        printf("%lld\n", result);
    }

    return 0;
}




