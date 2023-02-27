#include <stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int x, y;
    if(a > b){
        x = a;
    }
    else{
        x = b;
    }
    if(c > d){
        y = c;
    }
    else{
        y = d;
    }
    int largest;
    if(x > y){
        largest = x;
    }
    else{
        largest = y;
    }

    int i, j;
    if(a < b){
        i = a;
    }
    else{
        i = b;
    }
    if(c < d){
        j = c;
    }
    else{
        j = d;
    }
    int smallest;
    if(i < j){
        smallest = i;
    }
    else{
        smallest = j;
    }
    printf("Largest = %d\nSmallest = %d\n", largest, smallest);


    return 0;
}

