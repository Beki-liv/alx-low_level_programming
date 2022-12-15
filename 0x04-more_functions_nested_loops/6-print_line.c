#include "main.h"

/**
 * print_line - draws a striaght line in terminal
 * using _, end with a new line
 * if n is <=0 only prints new line
 */

void print_line(int n)
{
  if (n <= 0)
    {
      _putchar("\n");
    }else
    {
      int i;
      
      for (i = 1; i <= n; i ++)
	_putchar('\n');
    }
  _putchar("\n");
}
