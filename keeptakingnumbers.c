#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n;
  for(int i=1;i>=1;i++)
  {
    printf("enter number");
    scanf("%d",&n);
    printf("number is %d",n);
    if(n%2!=0)
    {
      break;
    }
  }
  printf("end");
  return 0;
}