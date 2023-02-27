#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int count = 0;
        if(n == 1){
            printf("No\n");
        }
        else if(n == 2){
            printf("Yes\n");
        }
        else if(n % 2 == 0){
            printf("No\n");
        }
        else{
            for(int i = 3; i <= n / 2; i++){
                if(n % i == 0){
                    count++;
                    break;
                }
            }
            if(count == 0){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }

    }

    return 0;
}
