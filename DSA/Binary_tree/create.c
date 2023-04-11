#include "tree.h"

bint * create();
int main()
{
	bint *root;
	root = 0;

	root = create();

	return 0;
}

bint* create()
{
	int x;
	bint * newnode;
	newnode = malloc(sizeof(bint));
	printf("Enter data(-1 for no node):");
	scanf("%d", &x);
	if(x == -1)
		return (0);
	newnode->data = x;
	printf("Enter data for left child %d", x);
	newnode->left = create();
	printf("Enter data for right child %d", x);
	newnode->right = create();
	return newnode;
}