#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    int k;
    scanf("%d", &k);
    if(k == 0){
        for(int i = 0; i < n; i++){
            printf("%d ", arr1[i]);
        }
        printf("\n");
    }
    else{
        int arr2[k];
        for(int i = 0; i < k; i++){
            arr2[i] = arr1[i];
        }
        for(int i = k; i < n; i++){
            printf("%d ", arr1[i]);
        }
        for(int i = 0; i < k; i++){
            printf("%d ", arr2[i]);
        }
        printf("\n");
    }

    return 0;
}
