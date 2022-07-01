#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int max = 26;
  int a = 0;
  int num = 97;
  while(a != max)
  {
    if(num >= 122)
    {
      num = 65;
      a = 0;
    }
    putchar(num + a);
    a++;
  }
  return (0);
}
