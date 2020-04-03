#include <stdio.h>
int main(void) {
   /*input principle, rate and time*/
   double P;
   double R;
   double T;
   double SI;
   printf("Enter principle:");
   scanf("%lf", &P);
   printf("Enter rate:");
   scanf("%lf", &R);
   printf("Enter Time Period:");
   scanf("%lf", &T);
   /* calculate simple interest */
   SI = (P*R*T)/100;
   /* Print resultant of simple interest */
   printf ("Simple interest is %f", SI);
   return 0;
}
    