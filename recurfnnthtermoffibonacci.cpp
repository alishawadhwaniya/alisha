#include<stdio.h>
int fib(int n);
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	printf("%dth term is %d",n,fib(n));
	return 0;
}
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	int fibo=fib(n-1)+fib(n-2);
	//printf("fibo term of %d is %d\n",n,fibo);
	return fibo;
}