#include<stdio.h>
int rev(int n,int a);
int main()
{
	int n;
	printf("enter num:");
	scanf("%d",&n);
	printf("rev num is %d",rev(n,0));
	return 0; 
}
int rev(int n,int a)//324
{
	if(n==0)
	{
		return a;
	}
	return rev(n/10,(a*10)+(n%10));
}