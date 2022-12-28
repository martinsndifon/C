#include<stdio.h>

int main()
{
	int marks;
	printf("Enter score:\n");
	scanf("%d", &marks);
	switch(marks/10)
	{
		case 10:
		case 9:
		case 8:
		case 7:
			printf("Your grade is A\n");
			break;
		case 6:
			printf("Your grade is B\n");
			break;
		case 5:
			printf("Your grade is C\n");
			break;
		case 4:
			printf("Your grade is D\n");
			break;
		case 3:
		case 2:
		case 1:
		case 0:
			printf("Your grade is F\n");
			break;
		default:
			printf("Invalid score entered\n");
	}
}