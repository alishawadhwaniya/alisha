#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("text.txt","r");
	int arr[10];
	fscanf(fptr,"%s",&arr);
	printf("nos are %s",arr);
	fclose(fptr);
	return 0;
}