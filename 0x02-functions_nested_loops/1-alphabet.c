#include <stdio.h>

/*
 * prints from a separate function
 */
int main(void)
{
  print_alphabet();

  retrun (0);
}

void print_alphabet(void)
{
  int i;
  
  for(i = 'a'; i <= 'z'; i++)
  {
     _putchar(i);
  }
  _putchar('\n');
}
