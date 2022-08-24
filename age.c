#include<stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int age;
  printf("enter age:\n");
  scanf("%d",&age);
  if(age>18)
  {
    printf("adult");
  }
   else if(age>13)
  {
    printf("teenager");
  }
  else
  {
    printf("child");
  }
  return 0;
}