int main(void) {
float x,y,sum;
char ch;
do {
printf ("Enter the first number:");
scanf ("%f",&x);
printf ("Enter the second number:");
scanf ("%f",&y);
sum=x+y;
printf ("The total number is:%f\n",sum);
printf ("Do you want to repeat the operation Y/N: ");
scanf (" %c", &ch);
}
while (ch == 'y' || ch == 'Y');
}