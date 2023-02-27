#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            int x = sqrt(arr[i]);
            if(x * x == arr[i]){
                count++;
            }
        }
        if(count > 0){
            printf("%d\n", count);
        }
        else{
            printf("-1\n");
        }
    }

    return 0;
}
