#include<stdio.h>
void fib(int n,int p,int q);
int main()
{
	int n,p=1,q=0;
	printf("enter n:");
	scanf("%d",&n);
	printf("0\n");
	fib(n,p,q);
	return 0;
}
void fib(int n,int p,int q)
{
	if(n==0)
	{
		return;
	}
	int a=p+q;
	p=q;
	q=a;
	printf("%d\n",a);
	fib(n-1,p,q);
}