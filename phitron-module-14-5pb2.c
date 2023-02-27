#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    scanf("%s", s);
    int length = strlen(s);
    int i = 0;
    int count = 0;
    while(s[i] != '\0'){
        if(s[i] == '1' || s[i] == '0'){
            count++;
        }
        else{
            break;
        }
        i++;
    }
    if(count == length){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;
}
