#include<stdio.h>
int main()
{
	float unit,a,surcharge,bill,b;
	printf("enter unit:");
	scanf("%f",&unit);
	if(unit<=50)
	{
		a=0.5*unit;
		surcharge=0.2*a;
		bill=a+surcharge;
		printf("bill is %f",bill);
	}
	else if(unit>50&&unit<=150)
	{
		b=unit-50;
		a=0.75*b+50*0.5;
		surcharge=0.2*a;
		bill=a+surcharge;
		printf("bill is %f",bill);
	}
	else if(unit>150&&unit<=250)
	{
		b=unit-150;
		a=1.2*b+0.75*100+50*0.5;
		surcharge=0.2*a;
		bill=a+surcharge;
		printf("bill is %f",bill);
	}
	else
	{
		b=unit-250;
		a=1.5*b+1.2*100+0.75*100+50*0.5;
		surcharge=0.2*a;
		bill=a+surcharge;
		printf("bill is %f",bill);
		
	}
	return 0; 
}