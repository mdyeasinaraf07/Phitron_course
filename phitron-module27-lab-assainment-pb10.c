#include <stdio.h>
void beautiful_array(int* arr, int n);

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    beautiful_array(arr, n);

    return 0;
}


void beautiful_array(int* arr, int n){
    int sizee;
    if(n % 2 == 0){
        sizee = n / 2;
    }
    else{
        sizee = (n / 2) + 1;
    }
    int count = 0;
    int num = 0;
    for(int i = 0; i < n; i++){
        while(arr[i] != 0){
           num = arr[i] % 10;
           arr[i] = arr[i] / 10;
           if(num == 7){
                count++;
                break;
           }
        }
    }
    if(count >= sizee){
        printf("Beautiful\n");
    }
    else{
        printf("Ugly\n");
    }
}
