#include <stdio.h>

void quicksort(int arr[], int lb, int ub);
int partition(int arr[], int lb, int ub);

int main()
{
	int arr[10] = {8, 5, 4, 6, 1, 3, 2, 7, 9, 0};
	int i, n, lb, ub;
	
	n = sizeof(arr) / sizeof(arr[0]);
	printf("Number of elements: %d\n", n);
	lb = 0;
	ub = n - 1;
	
	printf("Unsorted array\n");
	for (i = 0; i < (n - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
	
	quicksort(arr, lb, ub); // call quicksort

	printf("Sorted array\n");
	for (i = 0; i < (n - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
}

void quicksort(int arr[], int lb, int ub)
{
	int loc;

	if (ub < 2)
		return;

	if (lb < ub)
	{
		loc = partition(arr, lb, ub);
		quicksort(arr, lb, loc - 1);
		quicksort(arr, loc + 1, ub);
	}
}

int partition(int arr[], int lb, int ub)
{
	int pivot, start, end, tmp1 = 0, tmp2 = 0;

	pivot = arr[lb];
	start = lb;
	end = ub;

	while (start < end)
	{
		while (arr[start] <= pivot)
			start++;
		
		while (arr[end] > pivot)
			end--;
		
		if (start < end)
		{
			tmp1 = arr[start];
			arr[start] = arr[end];
			arr[end] = tmp1;
		}
	}
	tmp2 = arr[lb];
	arr[lb] = arr[end];
	arr[end] = tmp2;

	return (end);
}

/**
 * This implementation used the Hoare’s partition algorithm
 * Hoare uses two indices that start at the ends of the array being
 * partitioned, then move toward each other until they detect an inversion:
 * All elements smaller than the pivot are on it's left (in any order) and
 * all elements greater than the pivot are on it's right (in any order).
 */