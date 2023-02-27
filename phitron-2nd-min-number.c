#include <stdio.h>
int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d\n",min);
    int second_min = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] < second_min){
            if(arr[i] == min){
                second_min = second_min;
            }
            else{
                second_min = arr[i];
            }
        }
    }
    printf("%d\n",second_min);




    return 0;
}
