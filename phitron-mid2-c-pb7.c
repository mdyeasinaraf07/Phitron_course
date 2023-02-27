#include <stdio.h>
int medianValue(int arr[], int n);

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", medianValue(arr, n));


    return 0;
}


int medianValue(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if(n % 2 != 0){
       return arr[n / 2];
    }
    else{
        int result = (arr[(n / 2) - 1] + arr[n / 2]) / 2;
        return result;
    }

}






