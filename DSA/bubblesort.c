void bubblesort(int a[], int n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - 1); j++)
		{
			if (a[j] > a[j + 1]) //compares a[j] and a[j+1] and swap if needed
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}