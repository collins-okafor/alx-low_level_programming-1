#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program that prints _putchar and new line
 *
 * Return: returns 0
 */

int main(void)
{
	int i = 0;
	char p[8] = "_putchar";

	for (i = 0; i < 8; i++)
		{
		_putchar(p[i]);
		}
	_putchar("\n");
	return (0);
}
