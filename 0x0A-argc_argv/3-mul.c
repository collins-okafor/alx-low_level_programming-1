#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of two numbers
 * @argc: argment count
 * @argv: argument vector, array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;
	(void) argv;

	if (argc < 2)
	{
		printf("Error\n");
	}

	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}

	return (0);
}
