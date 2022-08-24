#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int p,c,m;
  float per,sum;
  printf("enter marks:");
  scanf("%d %d %d", &p,&c,&m);
  sum = p+c+m;
  printf("%.f",sum);
  per= sum/3;
  printf("per=%f",per);
  if(per>= 90)
  {
    printf("grade is A");
  }
  else if (per>=80)
  {
    printf("garde is B");
  }
  else if (per>=70)
  {
    printf("grade is C");
  }
  else
  {
    printf("grade is D");
  }
  return 0;
}