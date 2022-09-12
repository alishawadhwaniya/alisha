#include<stdio.h>
void printmenu()
{
	printf("Menu:\n1.Pizza\t Price=180rs/pcs\n2.Burger Price=100rs/pcs\n3.Dosa   Price=120rs/pcs\n4.Idli   Price=50rs/pcs\n");
}
int calamt(int choice,int n)
{
	if(choice==1)
	{
		return 180*n;
	}
	else if(choice==2)
	{
		return 100*n;
	}
	else if(choice==3)
	{
		return 120*n;
	}
	else return 50*n;	
}
int main()
{
	int totalamt=0; 
	char ch;
	do{
	printmenu();
	int choice;
	printf("\nPlease enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("You have selected pizza");
		break;
		case 2:printf("You have selected burger");
		break;
		case 3:printf("You have selected dosa");
		break;
		case 4:printf("You have selected Idli");
		break;
		default:printf("Invalid choice");
	}
	int n;
	printf("\nEnter the quantity:");
	scanf("%d",&n);
	int a=calamt(choice,n);
	printf("Amount =%d",a);
	totalamt=totalamt+a;
	printf("\nTotal amount is %d",totalamt);
	printf("\nDo you want to continue?(y/n):");
	scanf("%c");
	scanf("%c",&ch);
    }while(ch=='y');
	return 0; 
}