#include<stdio.h>
int main()
{
	for(int a=1;a<=5;a++)
	{
		printf("%d\n",a);
		for(int b=1;b<=a;b++)
		{
			printf(" ");
		}
		
	}
	return 0;
}