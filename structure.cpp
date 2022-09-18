#include<stdio.h>
#include<string.h>
struct student
{
	char name[100];
	int rollno;
	float cgpa;
};
int main()
{
	struct student s1;
	s1.rollno=58;
	s1.cgpa=9.6;
	strcpy(s1.name,"alisha");
	printf("name is %s\n",s1.name);
	printf("roll no= %d\n",s1.rollno);
	printf("cgpa is %f\n",s1.cgpa);
	return 0; 
}