#include "main.h"

void insert()
{
	int element;

	if (rear == LIMIT - 1)
		printf("Queue Overflow\n");
	else
	{
		if (front == - 1)
		front = 0;
		printf("Enter the element to be inserted in the queue: ");
		scanf("%d", &element);
		rear++;
		queue[rear] = element;
	}
}