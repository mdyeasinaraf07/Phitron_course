#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    scanf("%s", s);
    int length = strlen(s);
    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++){
            if(s[j] > s[i]){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("%s\n", s);

    return 0;
}
