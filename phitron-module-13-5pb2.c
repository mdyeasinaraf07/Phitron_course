#include <stdio.h>
#include <string.h>
int main(){
    char s1[101];
    scanf("%s", s1);
    char s2[101];
    int length = strlen(s1);
    int count = 1;
    for(int i = 0, j = length - 1; i < length; i++, j--){
        s2[j] = s1[i];
    }
    for(int i = 0; i < length; i++){
        if(s1[i] != s2[i]){
            count = 0;
            break;
        }
    }
    if(count == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
