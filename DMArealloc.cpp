#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	arr=(int*)calloc(5,sizeof(int));
	printf("enter values:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	arr=(int*)realloc(arr,7);
	printf("enter values(7):\n");
	for(int i=0;i<7;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<7;i++)
	{
		printf("number %d is %d\n",i,arr[i]);
	}
	return 0; 
}