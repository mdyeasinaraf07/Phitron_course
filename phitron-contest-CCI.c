#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        int count1 = 0;
        int count2 = 0;
        int i = 0;
        while(s[i] != '\0'){
            if(s[i] == 'H'){
                count1++;
            }
            else{
                count2++;
            }
            i++;
        }
        if(count1 > count2){
            printf("England\n");
        }
        else{
            printf("Pakistan\n");
        }
    }

    return 0;
}
