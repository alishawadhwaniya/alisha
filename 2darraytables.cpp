#include<stdio.h>
int main()
{
	int tables[2][10],n;
	for(int i=0;i<2;i++)
	{
		printf("enter n:");
	    scanf("%d",&n);
	   for (int j=1;j<=10;j++)
	   {
	   	 printf("%d X %d = %d\n",n,j,n*j);
	   }
	 
	}
}