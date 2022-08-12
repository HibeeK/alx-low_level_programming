#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: character  to be returned
 * Return: s
 */

int  _strlen(char *s)
{
	int a = 0;

	for  (; *s++;)
		a++;
	return (a);
}

