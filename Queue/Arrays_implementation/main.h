#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100 // Specifying the maximum limit of the queue

/* Global declaration of variables */
int queue[LIMIT]; // Array implementation of queue
int front, rear; // To delete and insert the data elements in the queue respectively
int i; // To traverse the loop while displaying the stack
int choice; // To choose either of the 3 stack operations
void insert(); // Function used to insert the element into the queue
void delet(); // Function used to delete the elememt from the queue
void display(); // Function used to display all the elements in the queue according to FIFO rule