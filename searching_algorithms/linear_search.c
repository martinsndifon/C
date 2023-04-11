#include <stdio.h>
#include <stdlib.h>
int linear_search(int[], int, int);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: %s <integer>\n", argv[0]);
		return (1);
	}
	int arr[8] = {15, 5, 20, 35, 2, 42, 67, 17};
	int key = atoi(argv[1]);
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int index = linear_search(arr, key, size);
	
	if (index == -1)
	{
		printf("key was not found\n");
		return (0);
	}
	printf("key was found at index: %d\n", index);

	return (0);
}

int linear_search(int arr[], int key, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return (i);
		}
	}
	return (-1);
}
