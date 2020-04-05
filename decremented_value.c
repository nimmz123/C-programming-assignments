#include <stdio.h>
int main(void)
{
    int n;
    printf ("Enter the number:");
    scanf("%d", &n);
    do
    {
         printf ("%d \n",n);
         n--;
    }
    while(n >= 0);
    return 0;
 }
 
