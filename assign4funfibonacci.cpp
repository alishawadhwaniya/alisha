#include<stdio.h>
void fib(int n)
{
	int a=1,b=0,c;
	printf("0\n");
	for(int i=1;i<=n;i++)
	{
	 c=a+b;
	 printf("%d\n",c);
	 a=b;
	 b=c;
	}
}
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
    fib(n);
}
