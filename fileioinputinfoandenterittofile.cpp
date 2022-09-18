#include<stdio.h>
typedef struct studinfo
{
	char name[10];
	int rollno;
}info;
int main()
{
	info s;
	printf("enter student name:\n");
	scanf("%s",&s.name);
	printf("enter rollno:\n");
	scanf("%d",&s.rollno);
	FILE *fptr;
	fptr=fopen("text.txt","w");
	fprintf(fptr,"%s\n",s.name);
	fprintf(fptr,"%d",s.rollno);
	fclose(fptr);
	return 0; 
}