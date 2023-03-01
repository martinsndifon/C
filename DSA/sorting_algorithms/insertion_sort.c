#include <stdio.h>

void insertionsort(int arr[], int n);

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
	
	insertionsort(arr, n); // call insertionsort

	printf("Sorted array\n");
	for (i = 0; i < (n - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
}

/**
 * insertionsort - sorts in ascending order an array of integers
 * @arr: the array passed to the function
 * @n: the number of elements in the array 
 * Return: void
 */
void insertionsort(int arr[], int n)
{
	int j, i, tmp = 0;

	if (n < 2)
		return;

	for (i = 1; i < n; i++)
	{
		tmp = arr[i];
		j = i - 1; 
		while (j >= 0 && arr[j] > tmp)
		{
			arr[j + 1]  = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
	}
}

/**
 * Working of the code - The first element of the array is considered the sorted
 * side of the array, the next element is then compared against the previous
 * elements from right to left until the correct position is found and it is
 * inserted at that position. This is done repeatedly until the entire array
 * has been sorted.
 */