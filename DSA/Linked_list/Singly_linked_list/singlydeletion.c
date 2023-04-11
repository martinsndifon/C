#include <stdio.h>
#include <stdlib.h>

// Function declaration
void from_beginning();
void from_end();
void from_position();
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
    int choice = 1, count = 0, a;
    head = 0;

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
		//if (!(choice >= 48 && choice <= 57))
		//	return (0);

    }
    temp = head;
    while (temp != 0)
    {
        temp = temp->next;
        count++; //-----> can be printed as length of the linked list
    }

    printf("Which operation do you want to perform ?\n press 1 ----> delete at the beginning\n press 2 ----> delete at the end\n press 3 ----> delete at specific position\n press 4 ----> To Display the Linked list\n");
    scanf("%d", &a);
	//if (!(a >= 49 && a <= 52))
	//	return (0);

    switch (a)
    {
    case 1:
        from_beginning();
        display();
        break;
    case 2:
        from_end();
        display();
        break;
    case 3:
        from_position(count);
        display();
        break;
    case 4:
        display();
        break;
	default :
		display();
		break;
    }
    return 0;
}

void from_beginning()
{
    temp = head;
    head = head->next;
	free(temp);
}

void from_end()
{
	struct node *prevnode;

	temp == head;
	while (temp->next != 0)
	{
		prevnode = temp;
		temp = temp->next;
	}
	if (temp == head)
		head = 0;
	else
		prevnode->next = 0;
	free (temp);
}

void from_position()
{
	struct node *nextnode;
	int pos, i = 1;
	temp = head;
	printf("Enter position: ");
	scanf("%d", &pos);

	while (i < (pos - 1))
	{
		temp = temp->next;
		i++;
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free (nextnode);
}

// Printing the Linked list
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