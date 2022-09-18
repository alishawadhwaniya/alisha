#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("test.txt","w");
	char arr[10];
	printf("enter array:\n");
	scanf("%s",&arr);
	fprintf(fptr,"%s",arr);
	fclose(fptr);
	
	return 0; 
}