#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int marks;
  printf("enter marks(1-100)");
  scanf("%d",&marks);
  marks>30&&marks<=100 ? printf("Pass") :marks<=30? printf("fail"):printf("invalidmarks");
  return 0;
}