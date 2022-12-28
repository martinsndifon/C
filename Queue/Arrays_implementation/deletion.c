#include "main.h"

void delet()
{
	if (front == - 1 || front > rear)
		printf("Queue Underflow \n");
	else
	{
		printf("The deleted element in the queue is: %d\n", queue[front]);
		front++;
	}
}