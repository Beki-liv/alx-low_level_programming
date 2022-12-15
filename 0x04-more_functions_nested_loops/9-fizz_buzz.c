#include "main.h"
#include <stdio.h>

/**
 * main - prints 1 to 100 followed by new line
 * but it prints fizz for multiplies of 3, 5 for multiplies of 5
 * and fizzbuzz for multiplies of 3 and 5
 * Return - 0 on success.
 */

int main(void)
{
  int i;

  for (i = 1; i <= 100; i++)
    {
      if (i % 3 == 0 && i % 5 == 0)
	{
	  printf("FizzBuz");
	}
      else if (i % 3 == 0)
	{
	  printf("Fizz");
	}
      else if (i % 5 == 0)
	{
	  printf("Buzz");
	}
      else
	{
	  printf("%d", i);
	}
    }
  printf("\n");

  return 0;
}
