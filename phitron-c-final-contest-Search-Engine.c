#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int x = 1; x <= t; x++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int s;
        scanf("%d", &s);
        int count = 0;
        int y = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == s){
                count++;
                y = i + 1;
                break;
            }
        }
        if(count == 1){
            printf("Case %d: %d\n", x, y);
        }
        else{
            printf("Case %d: Not Found\n", x);
        }
    }


    return 0;
}
