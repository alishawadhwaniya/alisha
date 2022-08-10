#include<stdio.h>
int main()
{
	char ch;
	printf("enter alphabet(small case):");
	scanf("%c",&ch);
	switch(ch)
    {
    	case'a': printf("its a vowel");
    	break;
    	case'e': printf("its a vowel");
    	break;
    	case'i': printf("its a vowel");
    	break;
    	case'o': printf("its a vowel");
    	break;
    	case'u': printf("its a vowel");
    	break;
    	default: printf("its consonant");
    }
    return 0;
}