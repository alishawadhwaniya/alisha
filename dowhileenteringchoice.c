#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int choice;
  int ch;
  do
  {
    
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: printf("hi\n");
      break;
      case 2: printf("hello\n");
      break;
    }
    printf("do you want to continue:Y-1,N-2?");
    scanf("%d",&ch);
    
  }while(ch==1);
  return 0;
}