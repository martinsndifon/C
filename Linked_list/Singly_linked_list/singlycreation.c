#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ch = 1, count = 0;
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head, *newnode, *temp;
	head = NULL;
	while (ch)
	{
		newnode = malloc(sizeof(struct node));
		if (newnode == NULL)
		{
			printf("Error\n");
			return (1);
		}
		printf("Enter data\n");
		scanf("%d", &newnode->data);
		newnode->next = NULL;

		if (head == NULL)
		{
			head = newnode;
			temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		printf("Do you want to create another node?\nEnter 1 for yes\nEnter 0 for no\nYour choice: ");
		scanf("%d", &ch);
	}
	printf("your nodes are:\n");
	temp = head;
	while (temp != NULL)
	{
		printf("%d\t", temp->data);
		temp = temp->next;
		count++;
	}
	printf("\nNumber of nodes are: %d", count);

	return (0);
}