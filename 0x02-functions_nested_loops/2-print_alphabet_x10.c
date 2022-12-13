#include "main.h"

/**
 * main - prints the alphabet ten times
 * Return - returns 1 on success
 */

void print_alphabet_x10(void)
{
  char ch;
  int i;

  for(i=0; i < 10; i++)
    {
      for (ch = 'a'; ch <= z; ch++)
	{
	  _putchar(ch);
	}
      _putchar("\n");
    }
}
      
