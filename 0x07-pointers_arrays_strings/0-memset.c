#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: the starting address of the memory to be filled
 * @b: pointer variable
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
