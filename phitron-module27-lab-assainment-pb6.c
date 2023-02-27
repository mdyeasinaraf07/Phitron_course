#include <stdio.h>
int divisible_by_3_counts(int arr[], int n);
int divisible_by_5_counts(int arr[], int n);

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int summ = divisible_by_3_counts(arr, n) + divisible_by_5_counts(arr, n);
    if(summ > 0){
        printf("%d\n", summ);
    }
    else{
        printf("-1\n");
    }


    return 0;
}




int divisible_by_3_counts(int arr[], int n){
    int count1 = 0;
    for(int i = 0; i < n; i++){
        if(((arr[i] % 3 == 0) && (arr[i] % 5 == 0)) || (arr[i] % 3 == 0)){
            count1++;
        }
    }
    if(count1 > 0){
        return count1;
    }
    else{
        return -1;
    }
}

int divisible_by_5_counts(int arr[], int n){
    int count3 = 0;
    int count4 = 0;
    for(int i = 0; i < n; i++){
        if((arr[i] % 3 == 0) && (arr[i] % 5 == 0)){
            count3++;
        }
        else if(arr[i] % 5 == 0){
            count4++;
        }
    }
    if(count4 > 0){
        return count4;
    }
    else{
        return -1;
    }
}
