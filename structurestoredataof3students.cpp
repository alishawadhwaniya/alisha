#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	float cgpa;
};
void takeprint(struct student s)
{
	printf("enter name, roll no and cgpa:\n");
	scanf("%s %d %f",&s.name,&s.roll,&s.cgpa);
	printf("name is %s, roll no is %d, cgpa is %f\n",s.name,s.roll,s.cgpa);
}
int main()
{
	struct student s1,s2,s3;
	takeprint(s1);
	takeprint(s2);
	takeprint(s3);
	return 0; 
}