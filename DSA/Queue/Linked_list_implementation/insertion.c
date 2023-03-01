#include "main.h"

void insert()
{
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
printf("Enter the element to be inserted in the queue: ");
scanf("%d", &temp->data);
temp->link = NULL;
if (rear == NULL)
{
front = rear = temp;
}
else
{
rear->link = temp;
rear = temp;
}
}