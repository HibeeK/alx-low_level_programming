#include "main.h"

/**
 * puts2 - ifunction that prints every other character of a string
 * @str: pointer to the string to be printed
 * Return: 0
 */

void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		putchar(str[string]);

	putchar('\n');
}

