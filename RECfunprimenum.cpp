#include<stdio.h>
int check(int n,int i,int count);
int main()
{
	int n,i=1,count=0;
	printf("enter n:\n");
	scanf("%d",&n);
	int a=check(n,i,count);
	if(a==2)
	{
		printf("no is prime");
	}
	else
	{
		printf("no is composite");
	}
	return 0; 
}
int check(int n,int i,int count)
{
	if(n%i==0)
	{
		count++;
	}
	if(i==n)
	{
		return count;
	}
	return check(n,i+1,count);
//	for(int i=1;i<=n;i++)
//	{
//		if(n%i==0)
//		{
//			count++;
//		}
//	}
//	return count;
}