#include<stdio.h>
void takevalue(int arr[],int n);
void print(int arr[],int n);
int main()
{
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements\n");
	takevalue(arr,n);
	printf("array elements are:\n");
	print(arr,n);
}
void takevalue(int arr[],int n)
{
	scanf("%d",&arr[n-1]);
	if(n==1)
	{
		return;
	}
	takevalue(arr,n-1);
}
void print(int arr[],int n)
{
	printf("%d\n",arr[n-1]);
	if(n==1)
	{
		return;
	}
	print(arr,n-1);
}