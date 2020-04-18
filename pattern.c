#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n,c,d,num,space;
  printf("Enter the number of rows to be printed\n");
  scanf("%d",&n);
  space=n-1;
  for(d=1;d<=n;d++){
    num=d;
    for(c=1;c<=space;c++)
      printf(" ");
      space--;
      for(c=1;c<=d;c++){
        printf("%d",num);
        num++;
      }
      num--;
      num--;
    for(c=1;c<d;c++){
      printf("%d",num);
      num--;
    }
    printf("\n");
  }
  return 0;
}