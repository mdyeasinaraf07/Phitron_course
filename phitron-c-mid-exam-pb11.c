#include <stdio.h>
int main(){
    int arr1[3][3];
    int arr2[8] = {0};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr1[i][j]);
            arr2[i] += arr1[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j == 0){
                arr2[3] += arr1[i][j];
                if(i == 0){
                   arr2[6] += arr1[i][j];
                   arr2[7] += arr1[i][j];
                }
            }
            else if(j == 1){
                arr2[4] += arr1[i][j];
                if(i == 1){
                    arr2[6] += arr1[i][j];
                    arr2[7] += arr1[i][j];
                }
            }
            else{
                arr2[5] += arr1[i][j];
                if(i == 2){
                    arr2[6] += arr1[i][j];
                    arr2[7] += arr1[i][j];
                }
            }
        }
    }

    int count = 1;
    for(int i = 1; i < 8; i++){
        if(arr2[0] != arr2[i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");


    return 0;
}
