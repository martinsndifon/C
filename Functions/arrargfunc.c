#include<stdio.h>

float avg(float[], int);

void main()
{
	float average;
	int size;
	float marks[5] = {10.3, 15.56, 20.32, 30, 45.1};
	size = sizeof(marks) / sizeof(marks[0]); //how to get size of an array
	average = avg(marks, size);
	printf("average = %.2f\n", average);
}

float avg(float name[], int size)
{
	float avg = 0.0, sum = 0.0;
	int i;
	for (i = 0; i < size; i++)
	{
		sum = sum + name[i];
	}
	avg = sum / size;
	return avg;
}