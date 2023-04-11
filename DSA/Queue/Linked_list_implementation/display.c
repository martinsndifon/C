#include "main.h"

void display()
{
struct node *temp;
temp = front;
int cnt = 0;
if (front == NULL)
{
printf("Queue underflow\n");
}
else
{
printf("The elements of the stack are:\n");
while (temp)
{
printf("%d\n", temp->data);
temp = temp->link;
cnt++;
}
}
}