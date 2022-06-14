#include "main.h"
/**
 * swap_int - swap 2 integers
 * @a: first int
 * @b: the second int
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
