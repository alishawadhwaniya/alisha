#include<stdio.h>
int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	int ceven=0,codd=0;
	int arr[n],even[n],odd[n];
	printf("enter array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			ceven++;
			even[ceven-1]=arr[i];
		}
		else
		{
			codd++;
			odd[codd-1]=arr[i];
		}	
	}
	printf("even array is:\n");
	for(int i=0;i<ceven;i++)
	{
		printf("%d\n",even[i]);
	}
    printf("odd array is:\n");
		for(int i=0;i<codd;i++)
	{
		printf("%d\n",odd[i]);  
	}
    return 0;           
}