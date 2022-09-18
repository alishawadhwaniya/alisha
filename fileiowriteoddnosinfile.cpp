#include<stdio.h>
int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	FILE *fptr;
	fptr=fopen("oddno.txt","w");
	for(int i=0;i<=n;i++)
	{
		if(i%2!=0)
		{
			fprintf(fptr,"%d\n",i);
		}
	}
	fclose(fptr);
	return 0; 
}