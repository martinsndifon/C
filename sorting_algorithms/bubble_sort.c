#include <stdio.h>

void bubblesort(int arr[], int n);

int main()
{
	int arr[10] = {8, 5, 4, 6, 1, 3, 2, 7, 9, 0};
	int i, n;

	n = sizeof(arr) / sizeof(arr[0]);
	printf("Number of elements: %d\n", n);
	
	printf("Unsorted array\n");
	for (i = 0; i < (n - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
	
	bubblesort(arr, n); // call bubblesort

	printf("Sorted array\n");
	for (i = 0; i < (n - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
}

/**
 * bubblesort - sorts in ascending order an array of integers
 * @arr: the array passed to the function
 * @n: the number of elements in the array 
 * Return: void
 */
void bubblesort(int arr[], int n)
{
	int j, i, flag, tmp = 0;

	if (n < 2)
		return;

	for (j = 0; j < (n - 1); j++)
	{
		flag = 0; // this helps to check if no swapping has been done
		for (i = 0; i < (n - 1) - j; i++)
		/**
		 * The (- j) added to (n - 1) makes sure that the last comparison
		 * is not done again because that side of the list is sorted
		 */
		{
			if (arr[i] > arr[i+1])
			{
				tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		// if no swapping was done, breaks out of loop (array sorted)
			break;
	}
}

/** 
 * Working of the code - Elements are checked against each other from left
 * to right, swapped if out of order until the largest one is bubbled up to
 * the end. The process repeated until sorted.
 */