#include<stdio.h>
int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	int arr[n],count=0;
	printf("enter array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			count++;
		}
	}
	printf("no of negative elements is %d",count);
	return 0;
}