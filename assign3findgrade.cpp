#include<stdio.h>
int main()
{
	int phy,chem,math;
	float total,per;
	printf("enter marks of phy,chem,math:");
	scanf("%d %d %d",&phy,&chem,&math);
	total=phy+chem+math;
	printf("total = %.f\n",total);
	per=total/3;
	printf("percentage=%f\n",per);
	if(per>90)
	{
		printf("grade is A+");
    }
    else if(per>80)
    {
    	printf("grade is A");
	}
	else if(per>70)
	{
		printf("grade is B+");
	}
    else if(per>60)
	{
		printf("grade is B");
	}	
	else 
	{
		printf("grade is C+");
	}
	return 0;		
	
}