#include <stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    int j = 0;
    for(int i = 2; i <= n; i += 2){
        arr[j] = i;
        j++;
    }
    for(int i = 1; i <= n; i += 2){
        arr[j] = i;
        j++;
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    printf("The %dth element in this sequence is %d.\n", k, arr[k - 1]);

    return 0;
}
