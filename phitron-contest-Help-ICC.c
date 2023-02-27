#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int arr[6];
        for(int i = 0; i < 6; i++){
            scanf("%d", &arr[i]);
        }
        int count = 0;
        for(int i = 0; i < 6; i++){
            if(arr[i] == 0){
                count++;
            }
        }
        if(count == 6){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
