#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: pointer to an integer
 * @b: pointer to another integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

