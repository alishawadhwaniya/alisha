#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n,a,b,ans=0;
  printf("enter n");
  scanf("%d",&n);
  while(n>0)
  {
    a=n%10;
    b=n/10;
    n=b;
    ans=ans*10+a;
  }
  printf("ans is %d",ans);
    
  return 0;
}