#include <stdio.h>

struct student
{
	int rollno;
	char name[20]; 
	float marks;
};

int main(void)
{
	int i;
	struct student s[3];
	printf("Enter info for s\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
	}
	printf("info for s\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d %s %.2f\n", s[i].rollno, s[i].name, s[i].marks);
	}

	return (0);
}