#include "main.h"

/**
  * more_numbers - print more numbers
  */

void more_numbers(void)
{
	int m, k;

	for (m = 1; m <= 10; m++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			_putchar('1');
			_putchar (k % 10 + '0');
		}
		_putchar('\n');
	}
}
