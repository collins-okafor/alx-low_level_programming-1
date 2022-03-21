#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: value to be evaluated
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *y = s;
	int e;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for (e = 0; e < ((1 / 2) + 1); e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
