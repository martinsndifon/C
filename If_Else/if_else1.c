#include<stdio.h>


void main()
{
	int marks;
	printf("Enter marks\n");
	scanf("%d", &marks);
	if (marks >= 70)
	{
		printf("Grade is A\n");
	}
	else if (marks >= 60)
	{
		printf("Grade is B\n");
	}
	else if (marks >= 50)
	{
		printf("Grade is C\n");
	}
	else if (marks >= 45)
	{
		printf("Grade is D\n");
	}
	else if (marks >= 40)
	{
		printf("Grade is E\n");
	}
	else
	{
		printf("Grade is F\n");
	}
}