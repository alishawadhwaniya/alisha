#include<stdio.h>
int sum(int x,int y);
int main()
{
	int a,b;
	printf("enter first no:");
	scanf("%d",&a);
	printf("enter second no:");
	scanf("%d",&b);
	printf("sum is %d",sum(a,b));	
}
int sum(int x,int y)
{
	return x+y;
}