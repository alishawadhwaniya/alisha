#include<stdio.h>
int min(int arr[],int n, int mini);
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
	int mini=arr[0];
	printf("min element is %d",min(arr,n,mini));
}
int min(int arr[],int n,int mini)
{
	if(n==0)
	{
		return mini;
	}
	if(arr[n-1]<mini)
	{
		mini=arr[n-1];
	}
	return min(arr,n-1,mini);
}