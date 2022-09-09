#include<stdio.h>
void takevalue(int arr[],int n);
int count(int arr[],int n, int a);
int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:\n");
	takevalue(arr,n);
	printf("no of negative elements is %d",count(arr,n,0));
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
int count(int arr[],int n,int a)
{
	if(arr[n-1]<0)
	{
		a++;
	}
	if(n==1)
	{
		return a;
	}
	return count(arr,n-1,a);
}