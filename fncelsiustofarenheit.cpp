#include<stdio.h>
float conv(float cel);
int main()
{
	float cel;
	printf("enter degree celsius:");
	scanf("%f",&cel);
	printf("Fahrenheit is %f",conv(cel));
	return 0;
}
float conv(float cel)
{
	return (cel*9/5)+32;
}