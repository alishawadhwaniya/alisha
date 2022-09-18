#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("text.txt","r");
	if(fptr==NULL)
	{
		printf("file doesnt exist\n");
	}
	else
	{
		fclose(fptr);
	}
	return 0; 
}