#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int* arr = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}


//→ malloc()
//It is a function that creates one block of memory of a fixed size.
//It only takes one argument.
//It is faster than calloc().
//It has high time efficiency.
//It is used to indicate memory allocation.
//
//→ calloc()
//It is a function that assigns more than one block of memory to a single variable.
//It takes two arguments.
//It is slower than malloc().
//It has low time efficiency.
//It is used to indicate contiguous memory allocation.

