#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that copes memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	result(dest);
}
