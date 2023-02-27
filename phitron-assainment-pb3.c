#include <stdio.h>
int main(){
    long long int a;
    scanf("%lld", &a);
    int count = 0;
    while(a != 0){
        a = a / 10;
        count++;
    }
    printf("%d digits\n", count);

    return 0;
}
