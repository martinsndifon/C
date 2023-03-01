#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *link;
}*front, *rear;

void insert(); // Function used to insert the element into the queue
void delet(); // Function used to delete the elememt from the queue
void display(); // Function used to display all the elements in the queue according to FIFO rule