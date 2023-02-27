#include <stdio.h>
int main(){
    char s[101];
    scanf("%s", s);
    int n;
    scanf("%d", &n);
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] < 'v'){
            s[i] += n;
        }
        else{
            if(s[i] == 'v'){
                s[i] = 'a';
            }
            else if(s[i] == 'w'){
                s[i] = 'b';
            }
            else if(s[i] == 'x'){
                s[i] = 'c';
            }
            else if(s[i] == 'y'){
                s[i] = 'd';
            }
            else{
                s[i] = 'z';
            }
        }
        i++;
    }
    printf("%s", s);


    return 0;
}
