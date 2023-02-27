#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x;
        scanf("%d", &x);
        char y;
        scanf("%c", &y);
        int deff1 = 0;
        int deff2 = 0;
        int deff3 = 0;
        if(x <= 60){
            deff1 = 60 - x;
        }
        if(x <= 80){
            if(x > 60){
                deff2 = (80 - x) * 2;
            }
            else{
                deff2 = (80 - 60) * 2;
            }
        }
        if(x <= 100){
            if(x > 80){
                deff3 = (100 - x) * 3;
            }
            else{
                deff3 = (100 - 80) * 3;
            }

        }

        int total = deff1 + deff2 + deff3;
        printf("%d minutes\n", total);

    }


    return 0;
}
