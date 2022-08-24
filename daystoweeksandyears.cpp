#include<stdio.h>
int main()
{
	int days;
	printf("enter the number of days:");
	scanf("%d",&days);
	printf("%d days is %f weeks\n",days,(float)days/7);
	printf("%d days is %f years\n",days,(float)days/365);
	return 0;
}