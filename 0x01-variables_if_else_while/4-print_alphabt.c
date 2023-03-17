#include <stdio.h>

/**
  * main - starting point
  *
  * Return: 0 always
  */

int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
		if (m != 'q' && m != 'e')
			putchar(m);
	putchar('\n');
	return (0);
}
