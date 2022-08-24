#include<stdio.h>
int main()
{
	int arr[5];
	printf("enter array elements:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);//1,2,5,4,3
	}
	int max=arr[0];
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("max element is %d",max);
	return 0;
}
