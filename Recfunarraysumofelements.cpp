#include<stdio.h>
void takevalue(int arr[],int n);
int sum(int arr[],int n,int a);
int main()
{
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:\n");
	takevalue(arr,n);
	printf("sum of array elements is %d",sum(arr,n,0));
	return 0; 
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
int sum(int arr[],int n,int a)
{
	if(n==0)
	{
		return a;
	}
	int b=arr[n-1];
	return sum(arr,n-1,b+a);
}