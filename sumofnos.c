#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int sum=0;
  for(int i=5;i<=50;i++)
  {
    sum=sum+i;
  }
  printf("sum is %d",sum);
  return 0;
}