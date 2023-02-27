#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            count++;
        }
    }
    printf("%d\n", count + 2);

    return 0;
}
