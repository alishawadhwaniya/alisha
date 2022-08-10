#include<stdio.h>
int main()
{
	int N,sum=0,oddsum=0;
	printf("enter N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		else
		{
			oddsum=oddsum+i;
		}
	}
	printf("sum of even no is:%d\n",sum);
	printf("sum of odd no is:%d",oddsum);
	return 0;
}