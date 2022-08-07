#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a=5,b=4; 
  int c = a+b;
  a = c-a;
  b = c-b;
  printf("a=%d,b=%d",a,b);
  return 0;
}
