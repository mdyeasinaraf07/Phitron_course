#include <stdio.h>
void result_str(char s[]);

int main(){
    char s[101];
    scanf("%s", s);
    result_str(s);

    return 0;
}


void result_str(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        if((i + 1) % 2 == 0){
            printf("%c%c", s[i], s[i]);
        }
        else{
            printf("%c", s[i]);
        }
        i++;
    }
    printf("\n");
}
