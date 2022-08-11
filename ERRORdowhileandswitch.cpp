#include<stdio.h>
int main()
{
	int choice;
	char ch;
	do
	{
	printf("enter choice");
	scanf("%d",&choice);
	switch(choice)
	  {
	  case 1: printf("hi\n");
	  break;
	  case 2: printf("hello\n");
	  break;
	  }
	printf("do you want to continue? Y/N\n");
	
	scanf("%c",&ch);
	
    }while(ch=='Y');
return 0;
}
	