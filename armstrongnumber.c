#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int number,n,a,b,ans=0;
  printf("enter n");
  scanf("%d",&n);
  number=n;
  while(n>0)
  {
    a=n%10;
    b=n/10;
    n=b;
    ans=ans+a*a*a;
  }
  if(number==ans)
  {
    printf("its armstrong number");
  }
  else{
    printf("not an armstrong number");
  }
  return 0;
}