#include "stdio.h"
/**
 * print_alphabet_x10 - check the code.
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
		_putchar('\n');
		i++;
	}


}