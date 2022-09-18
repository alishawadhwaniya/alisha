#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("test.txt","w");
	fputc('M',fptr);
	fputc('a',fptr);
	fputc('n',fptr);
	fputc('g',fptr);
	fputc('o',fptr);
	fclose(fptr);
	return 0; 
}