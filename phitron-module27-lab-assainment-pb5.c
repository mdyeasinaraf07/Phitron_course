#include <stdio.h>
int summation(int arr[], int n);

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", summation(arr, n));

    return 0;
}


int summation(int arr[], int n){
    int summ = 0;
    for(int i = 0; i < n; i++){
        if(((i + 1) % 2 == 0) && (arr[i] % 2 == 0)){
            summ += ((i + 1) + arr[i]);
        }
        else if(((i + 1) % 2 != 0) && (arr[i] % 2 != 0)){
            summ += ((i + 1) + arr[i]);
        }
    }
    return summ;
}
