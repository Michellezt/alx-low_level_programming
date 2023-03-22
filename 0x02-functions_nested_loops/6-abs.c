#include "main.h"

/**
  * _abs - function that computes the absolute value of an integer
  *
  * @k: parameter to be checked
  *
  * Return: always a
  */

int _abs(int k)
{
	if (k < 0)
		k = -(k);
	else if (k >= 0)
		k = k;
	return (k);
}
