#include<stdio.h>
int main()
{
	int m;
	printf("enter the value of meter:\n");
	scanf("%d",&m);
	printf("value of centimeter:%d\n",m*100);
	printf("value of kilometer:%f\n",(float)m/1000);
	return 0;
}