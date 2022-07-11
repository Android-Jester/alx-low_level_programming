#include "main.h"
/* More headers go here*/

/**
 * swap_int - swaps the values of two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
