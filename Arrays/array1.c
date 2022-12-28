#include<stdio.h>

//calculate average of array elements

void main()
{
	int marks[5], i;
	float avg, sum = 0;
	printf("Enter marks of student\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &marks[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum = sum + marks[i];
	}
	avg = sum/5;
	printf("sum is %.2f\nAverage is %.2f", sum, avg);
}