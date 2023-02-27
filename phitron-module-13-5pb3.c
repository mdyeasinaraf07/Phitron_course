#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    scanf("%s", s);
    int length = strlen(s);
    int vowel = 0;
    int consonant = 0;
    for(int i = 0; i < length; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vowel++;
        }
        else{
            consonant++;
        }
    }
    printf("Vowel - %d\nConsonant - %d\n", vowel, consonant);



    return 0;
}
