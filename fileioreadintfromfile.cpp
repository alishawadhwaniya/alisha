#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("text.txt","r");
	int arr[5];
	for(int i=0;i<5;i++)
	{
		fscanf(fptr,"%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	fclose(fptr);
	return 0;
}