#include "main.h"

/**
 * main - Prints the word _putchar followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main()
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
		{
		_putchar(p[i]);
		}
	_putchar("\n");
	return (0);
}
