#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 * ends with new line 
 * n - number of times \ character should be printed
 * if n <= 0, it prints only new line
 */

void print_diagonal(int n)
{
  if ( n <= 0)
    _putchar("\n");
  else
    {
      int i, j;
      for (i = 0; i < n; i++)
	{
	  for (j = 0; j < n; j++)
	    {
	      if (j ==1)
		_putchar("\n");
	      else if (j < i)
		_putchar(' ');
	    }
	  _putchar("\n");
	}
    }
}
