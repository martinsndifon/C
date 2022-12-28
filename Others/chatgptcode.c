#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node
{
    int data;
    struct Node* next;
};

// Function to reverse the linked list
struct Node* reverse(struct Node* head)
{
    // If the list is empty, return NULL
    if (head == NULL)
        return NULL;

    // Initialize pointers for reversing the list
    struct Node *prev = NULL, *current = head, *next;

    // Iterate through the list and reverse the links
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    // Set the new head of the reversed list
    head = prev;

    // Return the reversed list
    return head;
}

// Function to print the linked list
void printList(struct Node* head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Main function
int main()
{
    // Create a linked list
    struct Node* head = NULL;
    head = malloc(sizeof(struct Node));
    head->data = 1;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 3;
    head->next->next->next = NULL;

    // Print the original list
    printf("Original list: ");
    printList(head);

    // Reverse the list
    head = reverse(head);

    // Print the reversed list
    printf("Reversed list: ");
    printList(head);

    return 0;
}
