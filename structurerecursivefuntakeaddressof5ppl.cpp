#include<stdio.h>
#include<string.h>
typedef struct address
{
	int houseno;
	int block;
	char city[25];
	char state[25];
}add;
void takeinput(add p[],int n);
int main()
{
	add p[5];
	takeinput(p,0);
	return 0; 
}
void takeinput(add p[],int n)
{
	printf("enter address:\n");
	scanf("%d %d %s %s",&p[n].block,&p[n].houseno,&p[n].city,&p[n].state);
	printf("block no is %d\n",p[n].block);
	printf("house no is %d\n",p[n].houseno);
	printf("city is %s\n",p[n].city);
	printf("state is %s\n",p[n].state);
	if(n==4)
	{
		return;
	}
	takeinput(p,n+1);
}