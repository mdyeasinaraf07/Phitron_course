#include <stdio.h>
int main(){
    int r;
    scanf("%d", &r);
    int arr1[3][2];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    int x = 0;
    int y = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < r + 1; k++){
                for(int l = 0; l < 2; l++){
                    if((i != (arr1[k] - 1)) && (j != (arr1[l] - 1)){
                        x = i;
                        y = j;
                    }
                }
            }
        }
    }




    return 0;
}
