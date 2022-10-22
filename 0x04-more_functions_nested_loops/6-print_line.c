#include "main.h"
/**
 * print_line - a funtion that draws a straight line
 * @n: input number of times to print '_'
 * Return: a straight line with underscores
 */
void print_line(int n)
{
	int counter;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (counter = 1; counter <= n; counter++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
