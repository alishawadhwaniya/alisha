#include<stdio.h>
int sum(int n);
int main()
{
	int n,tot=0;
	printf("enter n:");
	scanf("%d",&n);
	printf("sum of digits of number is %d",sum(n));
}
int sum(int n)
{
	if(n/10==0)
	{
		return n%10;
	}
	return sum(n/10)+n%10;
}