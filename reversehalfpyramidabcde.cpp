#include<stdio.h>
int main()
{
	for(char ch='e';ch>='a';ch--)
	{
	for(char che='a';che<=ch;che++)
	{
		printf("%c ",che);
	}
	printf("\n");
    }
	return 0;
}