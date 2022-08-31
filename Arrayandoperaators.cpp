#include<stdio.h>
int main()
{
	int price[3];
	printf("enter price of 3 items:");
	scanf("%d %d %d",&price[0],&price[1],&price[2]);
	float cost[3];
	cost[0]=price[0]+0.18*price[0];
	cost[1]=price[1]+0.18*price[1];
	cost[2]=price[2]+0.18*price[2];
	printf("final price is %f",cost[0]+cost[1]+cost[2]);
	return 0; 	
}