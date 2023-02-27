#include <stdio.h>
void consecutive_even_numbers(int n);

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        consecutive_even_numbers(n);
    }

    return 0;
}


void consecutive_even_numbers(int n){
    int a, b, c, d;
    a = (n / 4) - 3;
    b = (n / 4) - 1;
    c = (n / 4) + 1;
    d = (n / 4) + 3;
    printf("%d %d %d %d\n", a, b, c, d);
}
