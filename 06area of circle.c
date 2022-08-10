//find area of circle
#include<stdio.h>
int main()
{
	float radius;
	float a=22;
	float b=7;
	float pi=a/b;
	printf("enter value of radius:");
	scanf("%f",&radius);
	printf("Area of circle is: %f",radius*radius*pi);
	return 0;
}