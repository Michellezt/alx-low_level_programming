#include "main.h"

/**
  * print_square - prints a square, followed by a new line;
  * @size: size of the square
  */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, k;

		for (m = 0; m < size; m++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
