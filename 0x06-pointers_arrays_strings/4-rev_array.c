#include "main.h"
/**
  * reverse_array - function that reverses the content of an array
  * @a: array
  * @n: numbwer of elements of arrsy
  * Return: always 0
  */
void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}
