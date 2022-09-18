#include<stdio.h>
#include<string.h>
typedef struct address
{
	int houseno;
	int block;
	char city[25];
	char state[25];
}add;
void takeinput(add p[]);
int main()
{
	add p[5];
	takeinput(p);
	return 0; 
}
void takeinput(add p[])
{
	for(int i=0;i<5;i++)
	{
		printf("enter address:\n");
		scanf("%d",&p[i].houseno);
		scanf("%d",&p[i].block);
		scanf("%s",&p[i].city);
		scanf("%s",&p[i].state);
		printf("house no is %d\n",p[i].houseno);
	    printf("block no is %d\n",p[i].block);
	    printf("city is %s\n",p[i].city);
	    printf("state is %s\n",p[i].state);
	}
}