#include "main.h"

/**
 * function to print last digit
 */

int print_last_digit(int n)
{
  in l;

  l = n % 10;

  if(l < 0)
    {
      l = l * -1;
    }
  _putchar(l + '0');

  return l;
}