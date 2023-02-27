#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int count1 = 0;
    int count2 = 0;
    int maxEvenSum = 0;
    int maxOddSum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            count1++;
            if(count1 < 3){
                maxEvenSum += arr[i];
            }
        }
        else{
            count2++;
            if(count2 < 3){
                maxOddSum += arr[i];
            }
        }
    }

    if(maxEvenSum > maxOddSum){

        printf("%d\n", maxEvenSum);
    }
    else{
        if(maxOddSum % 2 != 0){
            printf("%d\n", maxEvenSum);
        }
        else{
            printf("%d\n", maxOddSum);
        }
    }

    return 0;
}
