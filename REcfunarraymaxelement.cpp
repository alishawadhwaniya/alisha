#include<stdio.h>
int max(int arr[],int n, int maxi);
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int maxi=arr[0];
	printf("max element is %d",max(arr,n,maxi));
}
int max(int arr[],int n,int maxi)
{
	if(n==0)
	{
		return maxi;
	}
	if(arr[n-1]>maxi)
	{
		maxi=arr[n-1];
	}
	return max(arr,n-1,maxi);
}