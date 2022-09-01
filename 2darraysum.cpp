#include<stdio.h>
int main()
{
	int arr[2][3],ary[2][3];
	printf("enter marks of both students:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}	
	printf("enter marks of other two students:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&ary[i][j]);
		}
	}
	printf("sum of marks:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\n",arr[i][j]+ary[i][j]);
		}
	}
	return 0; 
	
}