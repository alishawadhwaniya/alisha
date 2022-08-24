#include<stdio.h>
int main()
{
	int mat,ph,chem,total,totalmp;
	printf("enter marks of math:");
	scanf("%d",&mat);
	printf("enter marks of phy:");
	scanf("%d",&ph);
	printf("enter marks of chem:");
	scanf("%d",&chem);
	total= mat+ph+chem;
	totalmp=mat+ph;
	if((mat>=65&&ph>=55&&chem>=50)&&(total>=190||totalmp>=140))
    {
    	printf("eligible for admission");
	}
	else
	{
		printf("not eligible for admission");
	}
	return 0;
}