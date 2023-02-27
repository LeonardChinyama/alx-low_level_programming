#include "main.h"

/*
* function to swap values base on pointers
*/
void swap_int(int *a, int *b)
{
    int s = *a;
    *a = *b;
    *b = s;
}