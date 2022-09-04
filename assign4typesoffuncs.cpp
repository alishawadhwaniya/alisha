#include<stdio.h>
void print();//user defined function without parameters
int sum(int a,int b);//user defined function with parameters
int main()
{
	int a=5,b=6;
	printf("%d\n",sum(a,b));//built in function
	print();
}
int sum(int a,int b)
{
	int c=a+b;
	return c; 
}
void print()
{
	printf("Thank you!");
}