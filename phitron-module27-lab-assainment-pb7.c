#include <stdio.h>
void swapp(int* x, int* y);

int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    int q;
    scanf("%d", &q);
    int arr2[q][2];
    for(int i = 0; i < q; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i = 0; i < q; i++){
        int a;
        int b;
        for(int j = 0; j < 2; j++){
            if(j == 0){
                a = (arr2[i][j]) - 1;
            }
            else{
                b = (arr2[i][j]) - 1;
            }
        }
        swapp(&arr1[a], &arr1[b]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");


    return 0;
}



void swapp(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
