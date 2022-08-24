#include<stdio.h>
int main()
{
	int n,a=0,b=1,c=0;
	printf("enter n:");
	scanf("%d",&n);
	printf("%d\n",a);
	for(int i=1;i<=n;i++)
    {
    	a=b+c;
    	b=c;
    	c=a;
    	printf("%d\n",a);
	}
	return 0;
}