#include "main.h"

/**
 * factorial - this function returns the factorial of a given number
 * @n: n is the variable input
 * Return: -1 if n is lower than 0 and the factorial of a number if greater than 1
 */

int factorial(int n)
{
  if (n == 0)
    {
      return (1);
    }
  if (n < 0)
    {
      return (-1);
    }
  else
    {
      return (n * factorial(n - 1);
    }
}
