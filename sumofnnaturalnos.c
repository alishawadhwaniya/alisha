#include <stdio.h>



int main()
{
  int n;
  printf("Enter n");
  scanf("%d",&n);
  int i=1,a=0;
  while(i<=n)
  {
    a=a+i;
    i++;
  }
  printf("%d",a);
  
  return 0;
}