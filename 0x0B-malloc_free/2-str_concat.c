#include "main.h"
#include <stdlib.h>

/**
  * *str_concat - function that concentrates two strings
  * @s1: pointer to destination of string
  * @s2: pointer to source of string
  * Return: return pointer to copy of string
  */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int k, n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	k = n = 0;
	while (s1[k] != '\0')
	{
		k++;
	}
	while (s2[n] != '\0')
	{
		n++;
	}
	ar = malloc(sizeof(char) * (k + n + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	k = n = 0;
	while (s1[k] != '\0')
	{
		ar[k] = s1[k];
		k++;
	}
	while (s2[n] != '\0')
	{
		ar[k] = s2[n];
		k++, n++;
	}
	ar[k] = '\0';
	return (ar);
}
