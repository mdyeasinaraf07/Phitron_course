#include <stdio.h>
int main(){
    char s[101];
    scanf("%s", s);
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] < 97){
            s[i] += 32;
        }
        else{
            s[i] -= 32;
        }
        i++;
    }
    printf("%s\n", s);

    return 0;
}
