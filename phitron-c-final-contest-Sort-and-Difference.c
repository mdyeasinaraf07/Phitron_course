#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr1[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr1[j] < arr1[i]){
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    int arr2[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr2[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr2[j] > arr2[i]){
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr1[i] - arr2[i]);
    }
    printf("\n");

    return 0;
}
