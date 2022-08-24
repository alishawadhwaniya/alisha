#include<stdio.h>
void printnumb(int n);
int main()
{
	printnumb(5);
	return 0;
}
void printnumb(int n)
{
	if(n==0)
	{
		return;
	}
	printf("%d\n",n);
	printnumb(n-1);
}