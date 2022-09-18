#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("test.txt","r");
	char arr[50];
	fscanf(fptr,"%s",&arr);
	printf("%s",arr);
	fclose(fptr);
	return 0;
}