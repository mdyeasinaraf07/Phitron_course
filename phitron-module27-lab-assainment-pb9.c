#include <stdio.h>
void is_prime(int* arr, int n);
void finding_average(int* arr, int n);

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

    }
    is_prime(arr, n);
    finding_average(arr, n);


    return 0;
}



void is_prime(int* arr, int n){
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 2; j <= (arr[i] / 2); j++){
            if(arr[i] % j == 0){
                count1 = 1;
                break;
            }
        }
        if(count1 != 1){
            count2++;
            count1 = 0;
        }
        else{
            count1 = 0;
        }
    }
    printf("Prime numbers: %d\n", count2);
}

void finding_average(int* arr, int n){
     float summ = 0;
     int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            summ += arr[i];
            count++;
        }
    }
    printf("Average of all even integers: %.2f\n", summ / count);
}
