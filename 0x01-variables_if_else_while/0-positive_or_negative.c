#include <stdio.h>
#include<time.h>
/**
  * main - Entry Point
  * 
  * Please use it consistently.
  *
  * Return: Always 0 (Successs)
  */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if(n > 0)
    printf("%d is %s\n", n, "is negative");
  else if(n == 0)
    printf("%d is %s\n", n, "is zero");
  else
    printf("%d is %s\n", n, "is positive");
  return (0);
}
