#include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	float marks;
}s3 = {3, "cliff", 65};
typedef struct student stu;
void main()
{
	stu s1 = {1, "jenny", 90};
	stu s2 = {2, "max"};

	printf("%d %s %.2f\n", s1.rollno, s1.name, s1.marks);
	printf("%d %s %.2f\n", s2.rollno, s2.name, s2.marks);
	printf("%d %s %.2f\n", s3.rollno, s3.name, s3.marks);
}