#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char *str = malloc(4096 * sizeof(char));

	printf("Enter string to print: ");
	fgets(str, 4096, stdin);

	i = 0;
	while (*(str + i) != '\0')
		i++;

	write(1, str, i);
	free(str);

	return (0);
}
