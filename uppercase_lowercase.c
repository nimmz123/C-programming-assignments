#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char str[10] ;
  int i;
  printf("\nEnter a string:");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>=65 && str[i]<=90)
       str[i]=str[i]+32;
       
    else 
       str[i]=str[i]-32;
  }
  printf ("\nConverted string is:%s",str);
  return 0;
}