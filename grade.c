#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks(out of 100):");
    scanf("%d",&marks);
    switch(marks/10)
    {
    case 10:
    case 9:
    printf("Grade:A\n");
    break;
    case 8:
    printf("Grade:B\n");
    break;
    case 7:
    printf("Grade:C\n");
    break;
    case 6:
    printf("Grade:D\n");
    break;
    case 5:
    printf("Grade:E\n");
    break;
    case 4:
    printf("Grade:F\n");
    break;
    }
    

    return 0;
}
