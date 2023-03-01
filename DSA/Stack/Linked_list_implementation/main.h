#include <stdio.h>
#include <stdlib.h>
void push(); // Function used to insert the element into the stack
void pop(); // Function used to delete the elememt from the stack
void display(); // Function used to display all the elements in the stack according to LIFO rule

struct node
{
	int data;
	struct node *next;
};
struct node *temp;