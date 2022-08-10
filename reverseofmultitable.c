#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n;
  printf("enter n");
  scanf("%d",&n);
  for(int i=10;i>=1;i--){
    printf("%dX%d=%d\n",n,i,n*i);
  }
  return 0;
}