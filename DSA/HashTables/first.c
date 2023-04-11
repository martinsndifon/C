#include "main.h"

node* first[26] = {NULL};

/**
 * hash - the hash function takes a string and hashes
 * it into the correct bucket
 * @param buffer - the name of the user
 * 
 */
int hash(const char* buffer)
{
    // assign a number to the first char of buffer from 0-25
    return tolower(buffer[0]) - 'a';
}

void insert(int key, const char* buffer)
{
    // try to instantiate node to insert word
    node* newptr = malloc(sizeof(node));
    if (newptr == NULL)
    {
        return;
    }

    // make a new pointer
    strcpy(newptr->name, buffer);
    newptr->next = NULL;

    // check for empty list
    if (first[key] == NULL)
    {
       first[key] = newptr;
    }
    // check for insertion at tail
    else
    {
        node* temp = first[key];
        while (1)
        {
            // insert at tail
            if (temp->next == NULL)
            {
                temp->next = newptr;
                break;
            }

            // update pointer
            temp = temp->next;
        }
    }
}

int main(char* name)
{
    // hash the name into a spot
    int hashedValue = hash(name);

    // insert the name in table with hashed value
    insert(hashedValue, name);
}