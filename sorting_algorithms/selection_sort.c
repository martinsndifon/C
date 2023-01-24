#include <stdio.h>

void selectionsort(int arr[], int n);

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
	
	selectionsort(arr, n); // call selectionsort

	printf("Sorted array\n");
	for (i = 0; i < (n - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
}

/**
 * selectionsort - sorts in ascending order an array of integers
 * @arr: the array passed to the function
 * @n: the number of elements in the array 
 * Return: void
 */
void selectionsort(int arr[], int n)
{
	int i, j, tmp;

	if (n < 2)
		return;

	for (i = 0; i < (n - 1); i++)
	{
		int min = i;
		for (j = (i + 1); j < n; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		if (min != i)
		{
			tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}
}

/**
 * Working of the code - The first element of the array is taken as the
 * minimum and then compared with other elements searching for a new minimum
 * if one is found, the minimum(min) is updated. At the end if the minimum
 * is different from the original set minimum, the value of the found mimimum
 * is swapped with the old miminum, the process repeats until the end of the
 * array is reached.
 */