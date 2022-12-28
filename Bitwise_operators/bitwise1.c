#include <stdio.h>

/*bitwise representation of &, | and ^*/

int main(void)
{
	int a = 10, b, c, d, e, f;

	/*left shift operator*/
	c = a << 2;
	d = a << 4;

	/*right shift operator*/
	e = a >> 2;
	f = a >> 4;

	/*bitwise NOT operator*/
	b = ~a;
	printf("%d\n%d\n%d\n%d\n%d", c, d, e, f, b);
}