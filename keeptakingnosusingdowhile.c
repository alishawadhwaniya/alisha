#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n,i=1;
  do
  {
    printf("enter n");
    scanf("%d",&n);
    printf("number is %d",n);
    if(n%2!=0)
    {
      break;
    }
    i++;
  }while(i>=1);
  printf("end");
  return 0;
}