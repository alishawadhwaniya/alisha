#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char ch;
  printf("enter d or y");//d for yearsintodays
  scanf("%c",&ch);// y for days to years
  float day;
  int year;
  switch(ch)
  {
  case'd':
  printf("enter year:\n");
  scanf("%d",&year);
  printf("days are %d",year*365);
  break;
  case'y':
  printf("enter days:\n");
  scanf("%f",&day);
  printf("years=%f",day/365);
  break;
  }
  return 0;
}