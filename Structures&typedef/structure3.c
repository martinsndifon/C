#include <stdio.h>

/*designated initialization of structures members*/

struct student
{
	int rollno;
	int name;
	float marks;
};

void main()
{
	struct student s1 = {.name = 34, .marks = 40, .rollno = 12}; /*designated initialization*/
	printf("%d %d %.2f\n", s1.rollno, s1.name, s1.marks);
}