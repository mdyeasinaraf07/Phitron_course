#include <stdio.h>
int countValue(int arr[], int n, int k);

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    printf("%d\n", countValue(arr, n, k));


    return 0;
}

int countValue(int arr[], int n, int k){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != k){
            count++;
        }
    }
    return count;
}
