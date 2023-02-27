#include <stdio.h>
int main(){
    int arr[10];
    int Even = 0;
    int Odd = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0){
            Even++;
        }
        else{
            Odd++;
        }
    }
    printf("Even = %d\nOdd = %d\n", Even, Odd);




    return 0;
}
