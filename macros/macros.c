#include <stdio.h>

int main()
{
	printf("date: %s\n", __DATE__);
	printf("time: %s\n", __TIME__);
	printf("file: %s\n", __FILE__);
	printf("line: %d\n", __LINE__);
	printf("ANSI: %d", __STDC__);

	return (0);
}