#include "main.h"
/**
 * Function to print the alphabet
 * in lower case
*/
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
		{
		_putchar(i);
		i++;
		}
	_putchar('\n');
}
