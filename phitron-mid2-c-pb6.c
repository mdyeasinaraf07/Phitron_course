#include <stdio.h>

int factorial(int fac1);
int sec_factorial(int fac1, int fac2);

int main(){
   int fac1;
   scanf("%d", &fac1);
   int f = factorial(fac1);
   printf("Factorial: %d\n", f);

   int fac2, fac3;
   scanf("%d %d", &fac2, &fac3);
   int f2 = sec_factorial(fac2, fac3);
   printf("Factorial ratio = %d", f2);

   return 0;
}

int factorial(int fac1){
   int i;
   int a = 1;
   for(i = 1; i <= fac1; i++){
      a *= i;
   }

   return a;
}

int sec_factorial(int fac1, int fac2){
   int first_fac = factorial(fac1);
   int sec_fac = factorial(fac2);
   int ratio = first_fac / sec_fac;


   return ratio;
}

