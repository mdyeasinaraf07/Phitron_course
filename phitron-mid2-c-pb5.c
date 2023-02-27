#include <stdio.h>
int add_three_nums(int a, int b, int c);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", add_three_nums(a, b, 0));

    return 0;
}


int add_three_nums(int a, int b, int c){
	return a+b+c;
}
