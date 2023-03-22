#include "main.h"

/**
  * times_table - function that print the 9 times table
  *
  * Return: always 0
  */

void times_table(void)
{
	int m, f, k, u, h;

	for (m = 0 ; m <= 9 ; m++)
	{
		for (f = 0 ; f <= 9 ; f++)
		{
			k = m * f;
			if (k > 9)
			{
				u = k % 10;
				h = (k - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(h + '0');
				_putchar(u + '0');
			}
			else
			{
				if (f != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
