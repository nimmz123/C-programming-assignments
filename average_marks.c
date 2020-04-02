#include <stdio.h>
int main(void) {
   char name [20];
   printf("Enter your name:");
   fgets(name, 20, stdin);
   printf("Student's name is %s", name);
   double num1;
   double num2;
   printf("Enter your science mark:");
   scanf("%lf", &num1);
   printf("Enter your maths mark:");
   scanf("%lf", &num2);
   printf("Average mark of the student is %f", (num1+num2)/2);
   return 0;
}


    