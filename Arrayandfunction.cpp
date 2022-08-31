#include<stdio.h>
void printnum(int arr[],int n);
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("%d index:",i);
		scanf("%d",&arr[i]);
	}
	printnum(arr,n);
	return 0; 
}
void printnum(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d index is %d\n",i,arr[i]);
	}
}