#include<stdio.h>
int main()
{
	int arr[4],count=0;
	printf("enter array elements:\n");
	for(int i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2!=0)
		{
			count++;
		}
	}
	printf("no of odd nos is %d",count);
	return 0; 
}