#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2, j = 0, k = 1; i < n; i++,j++,k++){
       arr[i] = arr[j] + arr[k];
    }
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");


    return 0;
}
