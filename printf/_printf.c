#include "main.h"

/**
 * _printf - prints formatted output
 * 
 * @format: a string of specifiers to consider
 * Return: the formatted output
 */

int _printf(const char *format, ...)
{
	int i, j, k = 0;
	char *s, *ptr;
	char *str = malloc(sizeof(char) * 20);

	va_list arg;
	va_start(arg, format);

	for(j = 0; format[j] != '\0'; j++)
	{
		while(format[j] != '%')
		{
			if(format[j] == '\0')
				return (j + k);
			_putchar(format[j]);
			j++;
		}
		j++;
		switch(format[j])
		{
			case 'c': i = va_arg(arg, int);
						_putchar(i);
						k -= 1;
						break;

			case 's': s = va_arg(arg, char *);
						_puts(s);
						k = k + strlen(s);
						k -= 2;
						break;
			
			case '%': i = va_arg(arg, int);
						_putchar('%');
						k -= 1;
						break;
			
			case 'd': i = va_arg(arg, int);
						if(i < 0)
						{
							i = i * -1;
							_putchar('-');
							ptr = itoa(i, str, 10);
							_puts(ptr);
							k = k + strlen(ptr);
							k -= 2;
							break;
						}
						else
						{
							ptr = itoa(i, str, 10);
							_puts(ptr);
							k = k + strlen(ptr);
							k -= 2;
							break;
						}
			
			case 'i': i = va_arg(arg, int);
						if(i < 0)
						{
							i = i * -1;
							_putchar('-');
							ptr = itoa(i, str, 10);
							_puts(ptr);
							k = k + strlen(ptr);
							k -= 2;
							break;
						}
						else
						{
							ptr = itoa(i, str, 10);
							_puts(ptr);
							k = k + strlen(ptr);
							k -= 2;
							break;
						}

			case 'u': i = va_arg(arg, unsigned int);
						if(i < 0)
						{
							i = i * -1;
							ptr = itoa(i, str, 10);
							_puts(ptr);
							k = k + strlen(ptr);
							k -= 2;
							break;
						}
						else
						{
							ptr = itoa(i, str, 10);
							_puts(ptr);
							k = k + strlen(ptr);
							k -= 2;
							break;
						}
			
			case 'o': i = va_arg(arg, int);
							ptr = itoa(i, str, 8);
							_puts(ptr);
							k = k + strlen(ptr);
							k -= 2;
							break;
			
			case 'x': i = va_arg(arg, int);
							ptr = itoa(i, str, 16);
							_puts(ptr);
							k = k + strlen(ptr);
							k -= 2;
							break;
			
			case 'X': i = va_arg(arg, int);
							ptr = itoa(i, str, 16);
							_toupper(ptr);
							_puts(ptr);
							k = k + strlen(ptr);
							k -= 2;
							break;

			case 'p': i = va_arg(arg, int);
							ptr = itoa(i, str, 16);
							_puts(ptr);
							k = k + strlen(ptr);
							k -= 2;
							break;

			case 'b': i = va_arg(arg, int);
							ptr = itoa(i, str, 2);
							_puts(ptr);
							k = k + strlen(ptr);
							k -= 2;
							break;

			default: i = va_arg(arg, int);
						/*_putchar('%');*/
						_putchar(format[j]);
						k -= 1;
						break;
		}
	}
	va_end(arg);
	free(str);
	return (j + k);
}
