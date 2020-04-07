#include <stdio.h>
int main()
{
    int netsalary,basic,da,ta;
    printf("Enter basic salary of the employee:");
    scanf("%d",&basic);
    da =(10*basic)/100;
    ta =(12*basic)/100;
    netsalary = basic+da+ta;
    printf("\n Net Salary:%d",netsalary);
    return 0;
}
    
    