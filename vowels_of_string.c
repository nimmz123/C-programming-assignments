#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char string [50];
  int i=0, v=0;
  printf ("Enter a string:");
  gets(string);
  for(i=0; string [i]!='\0';i++)
  
  {
  if (string [i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
  v++;
  }
  
  printf ("vowels=%d",v);
  return 0;
}
 