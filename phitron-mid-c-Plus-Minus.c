#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int pCount = 0;
    int mCount = 0;
    int pMaxCount = 0;
    int mMaxCount = 0;
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == '+'){
            pCount++;
            if(mCount > mMaxCount){
                mMaxCount = mCount;
            }
            mCount = 0;
        }
        else{
            mCount++;
            if(pCount > pMaxCount){
                pMaxCount = pCount;
            }
            pCount = 0;
        }
        i++;
    }
    if(pCount > pMaxCount){
        pMaxCount = pCount;
    }
    else if(mCount > mMaxCount){
        mMaxCount = mCount;
    }

    if(pMaxCount > mMaxCount){
        printf("%d\n", pMaxCount);
    }
    else{
        printf("%d\n", mMaxCount);
    }

    return 0;
}
