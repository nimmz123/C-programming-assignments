  
#include <stdio.h>
 
double sumseries(double);
 
main()
{
    double number,sum;
    sum = sumseries(number);
    printf("\n Sum of the above series = %lf ", sum);
}
 
double sumseries(double m)
{
    double sum2 = 0, f = 1, i;
    for (i = 1; i <= 5; i++)
    {
        f = f * i;
        sum2 = sum2 +(i / f);
    }
    return(sum2);
}