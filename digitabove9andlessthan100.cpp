#include<stdio.h>
int main()
{ 
   int digit;
   printf("Digit:");
   scanf("%d",&digit);
   printf("%d",digit>9 && digit<100);
   return 0;
   
}