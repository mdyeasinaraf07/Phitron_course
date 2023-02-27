#include <stdio.h>
int main(){
    char s[100];
    scanf("%s", s);
    int i = 0;
    int j = i + 1;
    while(s[i] != '\0'){
        while(s[j] != '\0'){
            char temp;
            if(s[j] > s[i]){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            j++;
        }
        j = 0;
        i++;
    }

    int count = 0;
    int k = 0;
     while(s[k] != '\0'){
        if(s[k] != s[k + 1]){
            count++;
        }
        k++;
    }







    return 0;
}
