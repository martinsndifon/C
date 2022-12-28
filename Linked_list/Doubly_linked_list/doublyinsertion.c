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
int len = 0;

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

void at_beginning()
{
	struct node *newnode;
    newnode = malloc(sizeof(struct node));

    printf("Enter the data for insert at the beginning: \n");
    scanf("%d", &newnode->data);

	head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void at_end()
{
	struct node *newnode;
    temp = head;
    newnode = malloc(sizeof(struct node));

    printf("Enter the data for insert at the end:\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    tail->next = newnode;
	newnode->prev = tail;
	tail = newnode;
}

void at_position(int count)
{
	struct node *newnode;
    int pos, i = 1;

    temp = head;
    newnode = malloc(sizeof(struct node));

    printf("Enter the data for the new node: \n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
	newnode->prev = 0;

    printf("Enter the position where you want to insert: \n");
    scanf("%d", &pos);
    if (pos <= 0 || pos > len)
    {
        printf("Can't be modified \n");
    }
	else if (pos == 1)
		at_beginning();
	else if (pos == len)
		at_end();
    else
    {
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
		temp->next = newnode;
		newnode->next->prev = newnode;
    }
}
