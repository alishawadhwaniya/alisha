#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("text.txt","w");
	char ch='A';
	fprintf(fptr,"%c",ch);
	fclose(fptr);
	return 0;
}