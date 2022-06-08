#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: input argument
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{

	int i;

	for (i = 97; i < 123; i++)
	{
		if (c == i)
		return (1);
	}
	return (0);
}
