#include<stdio.h>


void main()
{
	int age, salary;
	printf("Enter age & salary\n");
	scanf("%d %d", &age, &salary);
	if (age > 50)
	{
		if (salary < 60000)
		{
			salary = salary + 10000;
			printf("New salary = %d\n", salary);
		}
		else
		{
			salary = salary + 5000;
			printf("New salary = %d\n", salary);
		}
	}
	else
	{
		salary = salary + 3000;
		printf("New salary = %d\n", salary);
	}
	printf("End of program\n");
}
