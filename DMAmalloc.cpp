#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *ptr;
	ptr=(float*)malloc(5*sizeof(float));
	printf("enter prices:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%f",&ptr[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("price is :\n%f\n",ptr[i]);
	}
	return 0; 
}