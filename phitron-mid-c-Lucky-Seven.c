#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[21];
        scanf("%s", s);
        int length = strlen(s);
        int count = 0;
        if(length % 2 == 0){
            for(int i = 0, j = length - 1; i < length / 2; i++, j--){
                if(s[i] != s[j]){
                    count = 1;
                    break;
                }
            }
        }
        else{
            for(int i = 0, j = length - 1; i <= length / 2; i++, j--){
                if(s[i] != s[j]){
                    count = 1;
                    break;
                }
            }
        }
        if(count == 0){
            if(length <= 7){
                printf("Case #3: %s\n", s);
            }
            else{
                printf("Case #2: %c%d%c\n", s[0], length - 2, s[length - 1]);
            }
        }
        else{
            printf("Case #1: Not Palindrome\n");
        }

    }

    return 0;
}
