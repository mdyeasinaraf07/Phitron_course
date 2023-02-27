#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i > 1){
            printf("%d ", i);
            for(int j = i - 1; j >= 1; j--){
                printf("%d ", j);
            }
            printf("\n");
        }
        else{
            printf("%d\n", i);
        }
    }

    return 0;
}
