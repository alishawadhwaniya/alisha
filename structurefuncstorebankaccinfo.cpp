#include<stdio.h>
typedef struct accinfo
{
	char name[50];
	int accno;
}acc;
void print(acc p)
{
	printf("customer name is %s\n",p.name);
	printf("acc no is %d",p.accno);
}
int main()
{
	acc p;
	printf("enter customer name:\n");
	scanf("%s",&p.name);
	printf("enter acc no:\n");
	scanf("%d",&p.accno);
	print(p);
}