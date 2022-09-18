#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("test.txt","a");
	int arr[5];
	printf("enter integers:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
	    fprintf(fptr,"%d",arr[i]);
	}
    fclose(fptr);
    return 0; 
}