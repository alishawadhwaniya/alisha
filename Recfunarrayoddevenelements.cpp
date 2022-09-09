#include<stdio.h>
void takevalue(int arr[],int n);
int oddeven(int arr[],int n,int a);
int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:\n");
	takevalue(arr,n);
	printf("no of even elements is %d\n",oddeven(arr,n,0));
	printf("no of odd elements is %d\n",n-oddeven(arr,n,0));
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
int oddeven(int arr[],int n,int a)
{
	if(arr[n-1]%2==0)
	{
		a++;
	}
	if(n==1)
	{
		return a;
	}
	return oddeven(arr,n-1,a);
}