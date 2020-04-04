#include <stdio.h>
int main(void) {
   int age;
   printf("Age of the person:");
   scanf("%d", &age);
   if (age >= 60){
      printf("Pension amount is Rs.10000");

   }else if (age >= 50){
      printf("Pension amount is Rs.5000");

   }else {
      printf("No pension");
   }
   return 0;
}
    