#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n;
  printf("enter n");
  scanf("%d",&n);
  int i=0;
  while(i<=n)
  {
    printf("%d",i);
    i++;
  }
  return 0;
}