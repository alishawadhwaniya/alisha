#include<stdio.h>
int main()
{
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'?printf("alphabet"):printf("not alphabet");
	return 0; 
}