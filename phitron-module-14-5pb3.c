#include <stdio.h>
int main(){
    char s[101];
    scanf("%s", s);
    int sum = 0;
    int i = 0;
    while(s[i] != '\0'){
//        char k;
        for(int j = 1, char k = 'a'; k <= 'z'; i++, k++){
            if(s[i] == k){
                sum += j;
            }

        }
//        k = 'a';
        i++;
    }
    printf("%d\n", sum);




    return 0;
}
