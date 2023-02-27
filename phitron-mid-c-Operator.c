#include <stdio.h>
int main(){
    char s[21];
    scanf("%s", s);
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == '+'){
            sum += (a + b);
        }
        else{
            sum += (a * b);
        }

        i++;
    }
    printf("%d\n", sum);



    return 0;
}
