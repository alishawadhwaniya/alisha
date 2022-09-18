#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("test.txt","r");
	char ch;
	for(int i=0;ch!=EOF;i++)
	{
		ch=fgetc(fptr);
		printf("%c",ch);
	}
	fclose(fptr);
	return 0; 
}