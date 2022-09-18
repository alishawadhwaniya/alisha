#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("test.txt","r");
	int a,b;
	fscanf(fptr,"%d",&a);
	fscanf(fptr,"%d",&b);
	fclose(fptr);
	fptr=fopen("test.txt","w");
	fprintf(fptr,"%d",a+b);
	fclose(fptr);
	return 0; 
}