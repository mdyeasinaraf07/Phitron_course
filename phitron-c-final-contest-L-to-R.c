#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int l, r;
        scanf("%d %d", &l, &r);
        for(int i = l; i <= r; i++){
            if(i == 1 || i == 2){
                printf("%d ", i);
            }
            else{
                int count = 0;
                for(int j = 2; j <= i / 2; j++){
                    if(i % j == 0){
                        count++;
                        break;
                    }
                }
                if(count == 0){
                    printf("%d ", i);
                }
            }
        }
        printf("\n");
    }


    return 0;
}
