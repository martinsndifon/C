#include <stdio.h>
#include <stdlib.h>

// Function declaration
void reverselist();
void display();

struct node
{
    int data;
    struct node *next;
};

struct node *head;
struct node *newnode;
struct node *temp;

// main()
int main()
{
    int choice = 1;
    head = 0;
    int count = 0;;
    int a;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
		{
			printf("Error\n");
			return (1);
		}
		newnode->next = 0;
        printf("Enter the data you want to insert: \n");
        scanf("%d", &newnode->data);

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (1/0)?: ");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != 0)
    {
        temp = temp->next;
        count++; //-----> can be printed as length of the linked list
    }

	printf("Which operation do you want to perform ?\n press 1 ----> To Reverse the linked list\n Press 2 ----> To Display the Linked list\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        reverselist();
        display();
        break;
    case 2:
        display();
        break;
	default :
		display();
		break;
    }
    return 0;
}

void reverselist()
{
    struct node *prevnode, *currentnode, *nextnode;

	prevnode = 0;
	currentnode = nextnode = head;
	while (nextnode != 0)
	{
		nextnode = nextnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}
	head = prevnode;

}

void display()
{
    temp = head;
    printf("Your Linked list is: \n");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}