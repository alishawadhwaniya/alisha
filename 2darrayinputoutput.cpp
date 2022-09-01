#include<stdio.h>
int main()
{
	int arr[2][3];
	printf("enter marks of both students:");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("marks are:");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\n",arr[i][j]);
		}
	}
	return 0; 
	
}