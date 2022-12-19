#include "main.h"

/**
 * print_array - prints n elements of arrays followed by a newline
 * @n - number of elements to be printed
 * @a - array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i ++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a [i]);
	}
	_putchar('\n');
}
