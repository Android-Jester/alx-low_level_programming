#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int max = 26;
  int min = 0;
  int base = 97;
  while (min != max)
  {
    if(base != 101 || base !=113)
    {
      putchar(base + min);
    }
    min++;
  }
  return (0);
}
