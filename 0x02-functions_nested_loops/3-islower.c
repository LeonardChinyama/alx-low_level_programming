#include "main.h"

/**
 * function to check if character is lowercase
 */

int _isLower(int c)
{
  int v;
  
  if(c >= 'a' && c <= 'z')
  {
     v = 1;
  } else
  {
     v = 0;
  }

  return v;
}
