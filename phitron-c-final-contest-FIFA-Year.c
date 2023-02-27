#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int count = 0;
    int n = x;
    for(int i = 0; i < 2; i++){
        int y = n % 10;
        n /= 10;
        if(y == 0){
            count++;
        }
    }

    if(x % 4 == 0){
        if(count == 2){
            if(x % 400 == 0){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        else{
            printf("Yes\n");
        }
    }
    else{
        printf("No\n");
    }

    return 0;
}
