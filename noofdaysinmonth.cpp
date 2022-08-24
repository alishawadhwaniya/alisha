#include<stdio.h>
int main()
{
	
	char ans;
	int month;
	printf("enter number of month:");
	scanf("%d",&month);
	if(month<=7&&month%2!=0)
	{
		printf("no of days=31");
	}
	else if(month==2)
	{
		printf("Is it a leap year:Y/N?\n");
		scanf("%c");
        scanf("%c",&ans);  
		
		if(ans=='Y')
		{
			printf("no of days=29");
		}
		else
	    {
	    	printf("no of days=28");
		}
    }
	else if(month<=12&&month>=8&&month%2==0)
	{
		printf("no of days=31");
	}
	else
	{
		printf("no of days=30");
	}
	return 0;
}