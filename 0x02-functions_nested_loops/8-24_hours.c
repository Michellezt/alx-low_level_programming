#include "main.h"

/**
  * jack_bauer - function that prints every minute
  *
  * Return: always 0
  */

void jack_bauer(void)
{
	int m;
	int k;

	for (m = 0 ; m < 24 ; m++)
	{
		for (k = 0 ; k < 60 ; k++)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar(':');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar('\n');
		}
	}
}
