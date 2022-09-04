#include<stdio.h>
int main()
{
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++)
	{
	   for(int i=0;i<n-1;i++)
	  {
		if(arr[i]<arr[i+1])
		{
			int var=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=var;
		}
	  }
    }
	printf("Array elements in descending order:\n");
	   for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0; 
}