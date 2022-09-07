#include<stdio.h>
int fac(int n);
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	printf("%d! is %d",n,fac(n));
	return 0; 
}
int fac(int n)
{
	if(n==1)
	{
		return 1;
	}
	return fac(n-1)*n;
}