#include<stdio.h>
float sq(float side);
float cir(float rad);
float rec(float a,float b);
int main()
{
	float side,rad,a,b;
	printf("enter side:");
	scanf("%f",&side);
	printf("area of sq is %f\n",sq(side));
	printf("enter rad:");
	scanf("%f",&rad);
	printf("area of cir is %f\n",cir(rad));
	printf("enter a and b\n");
	scanf("%f %f",&a,&b);
	printf("area of rec is %f\n",rec(a,b));
	return 0; 
}
float sq(float side)
{
	return side*side;
}
float cir(float rad)
{
	return 3.14*rad*rad;
}
float rec(float a,float b)
{
	return a*b;
}