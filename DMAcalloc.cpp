#include<stdio.h>
#include<stdlib.h>
int main()
{
	float* ptr;
	ptr=(float*)calloc(5,sizeof(float));
	for(int i=0;i<5;i++)
	{
		printf("%d\n",ptr[i]);
	}
	return 0; 
}