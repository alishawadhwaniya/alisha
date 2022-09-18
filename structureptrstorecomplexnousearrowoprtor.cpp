#include<stdio.h>
typedef struct compno
{
	int real;
	int img;
}com;
int main()
{
	com num;
	printf("enter complex no:\n");
	scanf("%d %d",&num.real,&num.img);
	com *ptr=&num;
	printf("real part is %d\n",ptr->real);
	printf("img part is %d",ptr->img);
	return 0; 	
}