#include<stdio.h>
int pow(int m,int n);
int main()
{
    int m,n;
    printf("enter num:");
    scanf("%d",&m);
    printf("enter power:");
    scanf("%d",&n);
    printf("result is:%d",pow(m,n));
    return 0;
}
int pow(int m,int n)
{
	if(n==1)
	{
		return m;
	}
	return pow(m,n-1)*m;
}