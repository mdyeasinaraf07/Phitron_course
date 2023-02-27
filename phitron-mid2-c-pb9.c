#include <stdio.h>

int main(){
    int r = 3, c = 3;
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
