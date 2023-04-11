#include <stdio.h>

void mergesort(int arr[], int lb, int ub);
int merge(int arr[], int lb, int mid, int ub);

int main()
{
	int arr[] = {8, 5, 4, 6, 1, 3, 2, 7, 9, 0};
	int i, n, lb, ub;
	
	n = sizeof(arr) / sizeof(arr[0]);
	printf("Number of elements: %d\n", n);
	lb = 0;
	ub = n - 1;
	
	printf("Unsorted array\n");
	for (i = 0; i < (n - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
	
	mergesort(arr, lb, ub); // call mergesort

	printf("Sorted array\n");
	for (i = 0; i < (n - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
}


void mergesort(int arr[], int lb, int ub)
{
	int mid;

	if (lb < ub)
	{
		mid = (lb + ub)/2;
		mergesort(arr, lb, mid);
		mergesort(arr, mid + 1, ub);
		merge(arr, lb, mid, ub);
	}
}

int merge(int arr[], int lb, int mid, int ub)
{
	int i, j, k, tmp[ub];

	i = lb;
	j = mid + 1;
	k = lb;

	while(i <= mid && j <= ub)
	{
		if (arr[i] <= arr[j])
		{
			tmp[k] = arr[i];
			i++;
		}
		else
		{
			tmp[k] = arr[j];
			j++;
		}
		k++;
	}
	if (i > mid)
	{
		while(j <= ub)
		{
			tmp[k] = arr[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i <= mid)
		{
			tmp[k] = arr[i];
			i++;
			k++;
		}
	}
	for (k = lb; k <= ub; k++)
	{
		arr[k] = tmp[k];
	}
}