#include <stdio.h>
int main(){
    int arr[15];
    arr[0] = 1;
    printf("%d\n", arr[0]);
    for(int i = 1, j = 0; i < 15; i++, j++){
        arr[i] = arr[j] * 2;
        printf("%d\n", arr[i]);
    }

    return 0;
}
