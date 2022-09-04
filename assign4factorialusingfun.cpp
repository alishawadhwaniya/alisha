#include<stdio.h>
int fac(int n)
{
	int res=1;
	for(int i=1;i<=n;i++)
	{
		res=res*i;
	}
	return res;
}
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	printf("%d! is %d",n,fac(n));
	return 0; 
}

