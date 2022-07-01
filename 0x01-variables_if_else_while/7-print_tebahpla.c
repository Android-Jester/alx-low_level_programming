#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int max = 122;
  while(max >= 97)
  {
    putchar(max);
    max--;
  }
  return (0);
}
