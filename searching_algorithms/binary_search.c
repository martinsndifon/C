#include <stdio.h>
#include <stdlib.h>
int binary_search(int[], int, int);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: %s <integer>\n", argv[0]);
		return (1);
	}
	int arr[8] = {2, 5, 15, 17, 20, 35, 42, 67};
	int key = atoi(argv[1]);
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int index = binary_search(arr, key, size);
	
	if (index == -1)
	{
		printf("key was not found\n");
		return (0);
	}
	printf("key was found at index: %d\n", index);

	return (0);
}

int binary_search(int arr[], int key, int size)
{
	int left = 0, right = size - 1;

	while(left <= right)
	{
		int mid;
		mid = (left + right) / 2;

		if (key == arr[mid])
		{
			return (mid);
		}
		else if (key < arr[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
