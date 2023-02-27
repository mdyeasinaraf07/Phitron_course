#include <stdio.h>

char grade(int num);

int main(){
    int num;
    scanf("%d", &num);
    printf("%c\n", grade(num));

    return 0;
}

char grade(int num){
    if(num < 40){
        return 'F';
    }
    else if(num < 60){
        return 'C';
    }
    else if(num < 80){
        return 'B';
    }
    else{
        return 'A';
    }
}
