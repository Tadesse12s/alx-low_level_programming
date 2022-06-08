#include "main.h"
/**
 * main - a program that prints _putchar
 * Return: always 0 (success)
 */
int main(void)
{
	char t[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
	_putchar(t[i]);
	}
	_putchar('\n');
	return (0);
}
