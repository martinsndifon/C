#include <stdio.h>

typedef struct student
{
	int rollno;
	char name[20];
	float marks;
}stu;

void main()
{
	stu s1 = {1, "jenny", 90};
	printf("%d %s %.2f\n", s1.rollno, s1.name, s1.marks);
}