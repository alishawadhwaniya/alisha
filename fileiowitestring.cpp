#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("test.txt","w");
	char arr[25];
	printf("enter string:\n");
	scanf("%s",&arr);
	fprintf(fptr,"%s",arr);
	fclose(fptr);
	return 0; 
}