#include <stdio.h>
int main(){
    int arr[11]={12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    for(int i = 0; i < 11; i++){
        for(int j = 0; j < (11-1); j++){
            if(arr[j] > arr[j+1]){
                int tamp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tamp;
            }
        }
        for(int i = 0; i <11; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
   }

   return 0;
}

