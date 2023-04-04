#include "main.h"
/**
  * _strspn - function that gets the length of a prefix substring
  * @s: main to be scanned
  * @accept: contains the list of characters
  * Return: returns the number of characters in the initial segment
  * of s which consist only of characters from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				k++;
				break;
			}
			else if (accept[m + 1] == '\0')
			return (k);
		}
		s++;
	}
	return (k);
}
