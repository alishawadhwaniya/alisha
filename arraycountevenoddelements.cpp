#include<stdio.h>
int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	int arr[n],even=0,odd=0;
	printf("enter array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("no of even elements is %d\nNo of odd elements is %d\n",even,odd);
	return 0;
}