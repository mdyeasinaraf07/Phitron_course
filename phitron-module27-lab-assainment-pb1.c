#include <stdio.h>
void sum_of_nth_element(int n);

int main(){
    int n;
    scanf("%d", &n);
    sum_of_nth_element(n);

    return 0;
}


void sum_of_nth_element(int n){
    int sum = 0;
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(count  < 3){
            sum += i;

            count++;
        }
        else{
            sum -= i;
            count++;
            if(count == 6){
                count = 0;
            }
        }
    }
    printf("%d\n", sum);
}
