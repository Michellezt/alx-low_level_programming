#include <stdio.h>

/**
  * main - starting point
  *
  * Return: 0 always
  */

int main(void)
{
	int m;
	int k;
	int r;

	for (m = 0 ; m < 10 ; m++)
	{
		for (k = 1 ; k < 10 ; k++)
		{
			for (r = 2 ; r < 10 ; r++)
			{
				if (m < k && k < r)
				{
					putchar(m + '0');
					putchar(k + '0');
					putchar(r + '0');
					if (m + k + r != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
