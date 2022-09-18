#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("test.txt","r");
	printf("%c",fgetc(fptr));
	fclose(fptr);
	return 0; 
}