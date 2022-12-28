#include <stdio.h>

/*structure pointer*/

struct student
{
	int rollno;
	char name[20];
	float marks;
};

void main()
{
	struct student s;
	struct student *ptr = &s;

	printf("Enter member elements\n");
	scanf("%d %s %f", &(*ptr).rollno, ptr->name, &ptr->marks);
	printf("%d %s %.2f", (*ptr).rollno, ptr->name, ptr->marks);
}
