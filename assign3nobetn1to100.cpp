#include<stdio.h>
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	if(n>1&&n<100)
	{
		printf("number is between 1 and 100");
    }
    else
    {
    	printf("no not between 1 and 100");
	}
	return 0;
}