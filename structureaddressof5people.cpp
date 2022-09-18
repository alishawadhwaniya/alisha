#include<stdio.h>
#include<string.h>
typedef struct address
{
	int houseno;
	int block;
	char city[25];
	char state[25];
}add;
void takeinput(add p,int n);
int main()
{
	add p1,p2,p3,p4,p5;
	takeinput(p1,5);
	return 0; 
}
void takeinput(add p,int n)
{
	printf("enter address:\n");
	scanf("%d %d %s %s",&p.block,&p.houseno,&p.city,&p.state);
	printf("block no is %d\n",p.block);
	printf("house no is %d\n",p.houseno);
	printf("city is %s\n",p.city);
	printf("state is %s\n",p.state);
	if(n==1)
	{
		return;
	}
	takeinput(p,n-1);
}
