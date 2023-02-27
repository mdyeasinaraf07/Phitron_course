#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] <= max){
            int deff = max - arr[i];
            printf("%d ", deff);
        }
    }
    printf("\n");

    return 0;
}
