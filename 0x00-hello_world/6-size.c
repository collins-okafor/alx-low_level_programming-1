#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;
	int ainteger;
	long along;
	long long a;
	float afloat;
	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(b)); 
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(ainteger));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(afloat));
	return (0);
}
