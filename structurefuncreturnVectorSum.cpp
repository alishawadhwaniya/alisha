#include<stdio.h>
typedef struct vector
{
	int x;
	int y;
}vec;
int sum(vec v1,vec v2)
{
	return (v1.x+v2.x)+(v1.y+v2.y);
}
int main()
{
	vec v1,v2;
	printf("enter vector v1:\n");
	scanf("%d %d",&v1.x,&v1.y);
	printf("enter vector v2:\n");
	scanf("%d %d",&v2.x,&v2.y);
	printf("sum is %d",sum(v1,v2));
	return 0;	
}