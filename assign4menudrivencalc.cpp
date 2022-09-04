#include<stdio.h>
int add(int a,int b)
{
	return a+b; 
}
int sub(int a,int b)
{
	return a-b;
}
int multi(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b; 
}
int main()
{
	int a,b; 
	char choice,ch;
	do{
	printf("enter your choice(*,+,-,/):");
	scanf("%c",&choice);
	switch(choice)
	{
		case'*':printf("enter num1 and num2:");
		        scanf("%d %d",&a,&b);
				printf("%d",multi(a,b));
		break;
		case'+':printf("enter num1 and num2:");
		        scanf("%d %d",&a,&b);
				printf("%d",add(a,b));
		break;
		case'-':printf("enter num1 and num2:");
		        scanf("%d %d",&a,&b);
				printf("%d",sub(a,b));
		break;
		case'/':printf("enter num1 and num2:");
		        scanf("%d %d",&a,&b);
				printf("%d",div(a,b));
		break;
	}
	scanf("%c");
	printf("\nDo you want to continue(y/n)?:"); 
	scanf("%c",&ch);
	scanf("%c");
	}while(ch=='y');
	return 0; 
}
