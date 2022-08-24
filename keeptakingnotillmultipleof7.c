#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n;
  do
  {
    printf("enter n");
    scanf("%d",&n);
    printf("n is %d",n);
    if(n%7==0)
    {
      break;
    }
  }while(1);
  printf("End");
  return 0;
}