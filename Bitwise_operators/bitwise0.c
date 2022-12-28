#include <stdio.h>

/*bitwise representation of &, | and ^*/
/**
 * Precedence of the last printf statement:
 * 		relational operator +
 * 		bitwise operator
 * 		logical operators (&& bofore ||)
 * 		increment operator
 * 
 * @return int 
 */

int main(void)
{
	int a = 10, b = 5;

	printf("%d\n", a & b);
	printf("%d\n", a | b);
	printf("%d\n", a ^ b);
	printf("%d\n", a & b && b + 1 || 0 || b++);
	printf("%d", b);

	return (0);
}