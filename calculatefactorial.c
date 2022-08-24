#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n,res=1;
  printf("enter n");
  scanf("%d",&n);
  for(int i=n;i>=1;i--)
  {
    res=res*i;
  }
  printf("factorial of %d is %d",n,res);
  return 0;
}