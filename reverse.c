#include <stdio.h>

int main()
{
    int m,rev =0, remainder;
    printf("Enter a number :");
    scanf("%d", &m);
    while(m!=0)
    {
        remainder = m%10;
        rev= rev*10+remainder;
        m/=10;
    }
    printf("Reversed number is %d",rev);
    return 0;
}