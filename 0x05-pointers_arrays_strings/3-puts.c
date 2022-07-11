#include "main.h"
/* More headers go here */

/**
 * _puts - prints each character except the terminating character
 * @str: pointer
 * Return: int
 */
void _puts(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}