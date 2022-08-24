#include<stdio.h>
int main()
{
	float bassal,hra,da,gross;
	printf("enter basic salary:");
	scanf("%f",&bassal);
	if(bassal<=10000)
	{
		hra=0.2;
		da=0.8;
		gross=bassal+hra*bassal+da*bassal;
		printf("gross salary is %f",gross);
	}
	else if(bassal<=20000)
	{
		hra=0.25/100;
		da=0.9;
		gross=bassal+hra*bassal+da*bassal;
		printf("gross salary is %f",gross);
	}
	else
	{
		hra=0.3;
		da=0.95;
		gross=bassal+hra*bassal+da*bassal;
		printf("gross salary is %f",gross);
	}
	return 0;
}