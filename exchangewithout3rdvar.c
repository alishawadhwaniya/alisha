#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a=4,b=5;
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a=%d,b=%d",a,b);
  return 0;
}