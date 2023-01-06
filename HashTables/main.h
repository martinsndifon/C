#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * struct node - Node of a hash table
 *
 * @name: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct node
{
    char *name;
    struct node *next;
} node;

#endif