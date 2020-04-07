#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d", &num);
    if (num>0)
    {
    printf("%d is positive\n",num);
    }
     if(num<0)
    {
    printf("%d is negative \n",num);
    }
    if(num==0)
    {
    printf("%d is zero\n",num);
    }
    return 0;
}