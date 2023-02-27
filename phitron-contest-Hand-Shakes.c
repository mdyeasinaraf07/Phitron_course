#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld", &n);
    long long int sum = 0;
    long long int i = 1;
    while(i < n){
        sum += n - i;
        i++;
    }
    printf("%lld\n", sum);

    return 0;
}
