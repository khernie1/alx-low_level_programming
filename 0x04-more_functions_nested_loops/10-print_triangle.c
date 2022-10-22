#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int space, row, symbol;

		for (row = 1; row <= size; row++)
		{
			for (space = 1; space <= (size - row); space++)
			{
				_putchar(' ');
			}
			for (symbol = 1; symbol <= row; symbol++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
