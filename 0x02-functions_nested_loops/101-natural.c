#include <stdio.h>

/**
  * main - main function
  *
  * Return: always 0
  */

int main(void)
{
	int m;
	int sum;

	sum = 0;

	for (m = 0 ; m < 1024 ; m++)
	{
		if ((m % 3 == 0) || (m % 5 == 0))
		{
			sum = sum + m;
		}
	}
	printf("%d\n", sum);
	return (0);
}
