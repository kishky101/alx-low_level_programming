#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int cha;

	for (cha = 48; cha < 58; cha++)
	{
		_putchar(cha);
	}
	_putchar('\n');
}
