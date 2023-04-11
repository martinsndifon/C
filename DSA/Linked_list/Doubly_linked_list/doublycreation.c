#include <stdio.h>
#include <stdlib.h>

void create();
void display();

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head, *temp, *tail;

int main()
{
	create();
	display();
}

void create()
{
	head = NULL;
	struct node *newnode, *temp;
	int ch = 1;

	while(ch)
	{
		newnode = malloc(sizeof(struct node));

		printf("Enter data: ");
		scanf("%d", &newnode->data);

		newnode->prev = NULL;
		newnode->next = NULL;
		if (head == NULL)
			head = temp = tail =  newnode;
		else
		{
			temp->next = newnode;
			newnode->prev = temp;
			temp = newnode;
		}
		printf("Do you want to create another node?\nEnter 1 for yes\nEnter 0 for no\nYour choice: ");
		scanf("%d", &ch);
	}
	tail = temp;
}

void display()
{
	int len = 0;
    temp = head;
    printf("Your Linked list is: \n");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
		len++;
    }
	printf("\nNumber of nodes in the list: %d", len);
}