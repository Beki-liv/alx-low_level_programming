#include "main.h"

/**
 * swap_int - swaps two integer values
 * @*a - the first digit that gets swap
 * @8b - the second digit that gets swap
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
