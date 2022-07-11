#include "main.h"
/* More headers go here*/

/**
 * _puts - prints string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
