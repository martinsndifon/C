#include <stdio.h>
#include <stdarg.h>

void print(const char * const format, ...)
{
	va_list list;
	int i;

	va_start(list, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 's')
			printf("%s", va_arg(list, char *));
		else if (format[i] == 'c')
			printf("%c", va_arg(list, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(list, int));
		else if (format[i] == 'f')
			printf("%.2f", va_arg(list, double));
		i++;
	}
	va_end(list);
}

int main(void)
{
	print("fics", 45.34, 866, 't', "martins");

	return (0);
}