#include<stdio.h>
float  per(int s,int m,int san);
int main()
{
	int s,m,san;
	printf("enter marks of sci,math and san:");
	scanf("%d %d %d",&s,&m,&san);
	printf("percentage is %f",per(s,m,san));
	return 0;
}
float per(int s,int m,int san)
{
    return (s+m+san)/3.0 ;
}