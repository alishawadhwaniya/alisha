#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a=4,b=5,c;
  c=a;//here we stored value of a in c
  a=b;//now we can change value of a
  b=c;//and assign earlier stored value in b to c
  printf("a=%d,b=%d",a,b);
  return 0;
}