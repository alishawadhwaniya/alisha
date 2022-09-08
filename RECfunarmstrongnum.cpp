#include<stdio.h>
int armstrong(int n,int a);
int main()
{
	int n,a=0;
	printf("Enter n:\n");
	scanf("%d",&n);
	int c=armstrong(n,a);
	if(c==n)
	{
		printf("no is armstrong number");
	}
	else
	{
		printf("no is not an armstrong number");
	}
	return 0; 
}
int armstrong(int n,int a)
{
	int b=n%10;
	if(n==0)
	{
		return a;
	}
	return armstrong(n/10,b*b*b+a);
}