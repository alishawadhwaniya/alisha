#include<stdio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    for(int i=0;i<n/2;i++)
    {
    	int firstval=arr[i];
    	int secondval=arr[n-1-i];
    	arr[i]=secondval;
    	arr[n-1-i]=firstval;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0; 
}