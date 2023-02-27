#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char s[n+1];
    scanf("%s", s);
    for(int i = 0; s[i] != '\0'; i++){
        for(int j = i + 1; s[j] != '\0'; j++){
            if(s[j] < s[i]){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] != s[i - 1]){
            for(int j = i)
        }
        i++;
    }

    return 0;
}
