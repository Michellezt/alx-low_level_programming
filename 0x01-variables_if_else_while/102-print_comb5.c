#include <stdio.h>
#include <stdlib.h>

/**
  * main - starting point
  *
  * Return: 0 always
  */

int main(void)
{
	int m = 0;
	int k_r;
	int p_r;

	int m2;
	int k_r2;
	int p_r2;

	while (m <= 98)
	{
		k_r = (m / 10 + '0');
		p_r = (m % 10 + '0');
		m2 = 0;
		while (m2 <= 99)
		{
			k_r2 = (m2 / 10 + '0');
			p_r2 = (m2 % 10 + '0');

			if (m < m2)
			{
				putchar(k_r);
				putchar(p_r);
				putchar(' ');
				putchar(k_r2);
				putchar(p_r2);

				if (m != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m2++;
		}
		m2++;
	}
	putchar('\n');
	return (0);
}
