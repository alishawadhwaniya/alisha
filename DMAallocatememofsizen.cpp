#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	int *ptr;
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		printf("memory is allocated");
	}
	return 0; 
}