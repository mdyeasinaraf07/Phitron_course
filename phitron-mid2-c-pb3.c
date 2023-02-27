#include <stdio.h>
int myFunction(char s[]);

int main(){
    char s[101];
    scanf("%s", s);
    int result = myFunction(s);
    if(result == 1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}



int myFunction(char s[]){
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == '1'){
            count1++;
        }
        else if(s[i] == '9'){
            count2++;
        }
        else if(s[i] == '7'){
            count3++;
        }
        i++;
    }
    if((count1 > 0) && (count2 > 0) && (count3 > 0)){
        return 1;
    }
    else{
        return 0;
    }
}
