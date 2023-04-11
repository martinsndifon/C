#include "main.h"

void delet()
{
struct node *temp;
temp = front;
if (front == NULL)
{
printf("Queue underflow\n");
front = rear = NULL;
}
else
{
printf("The deleted element from the queue is: %d\n", front->data);
front = front->link;
free(temp);
}
}