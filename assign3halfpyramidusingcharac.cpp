#include<stdio.h>
int main()
{   
	for(char ch='a';ch<='e';ch++)
	{
		for(char chai='a';chai<=ch;chai++)
		{
			printf("%c ",chai);
		}
		printf("\n");
	}
	return 0;
}