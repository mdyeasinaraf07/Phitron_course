#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, c;
        scanf("%d %d", &n, &c);
        int arr[n];
        int sum = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        if((sum * 2) <= c){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}
