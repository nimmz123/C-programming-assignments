#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
 {
     char nam[15];
     int i,c =0;
     printf("Enter the string:");
     fgets(nam,15,stdin);
     for(i=0;nam[i]!=0;i++)
     c++;
     printf("String Reverse..\n");
     for(i=c-1;i>=0;i--)
     printf("%c",nam[i]);

     return 0;
 }