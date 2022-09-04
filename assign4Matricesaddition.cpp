#include<stdio.h>
void takevalue(int arr[2][3]);
void sum(int arr1[2][3],int arr2[2][3]);
int main()
{
	int arr1[2][3];
	takevalue(arr1);
	int arr2[2][3];
	takevalue(arr2);
	sum(arr1,arr2);
	return 0; 
}
void takevalue(int arr[2][3])
{
	
	printf("enter array elements:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
}
void sum(int arr1[2][3],int arr2[2][3])
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
            printf("%d ",arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
}