#include "main.h"
/* More headers go here */

/**
 * swap_int - takes two pointer and swaps their values, it point to
 * @a, @b: pointers
 * Return: void
 */
void swap_int(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;

}