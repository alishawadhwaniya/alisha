#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr=(int*)calloc(5,sizeof(int));
	printf("enter odd nos:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("%d",ptr[i]);
	}
	ptr=(int*)realloc(ptr,6);
	printf("enter even nos:\n");
	for(int i=0;i<6;i++)
	{
		scanf("%d\n",&ptr[i]);
	}
	printf("first six even nos are:\n");
	for(int i=0;i<6;i++)
	{
		printf("%d\n",ptr[i]);
	}
	return 0; 
}