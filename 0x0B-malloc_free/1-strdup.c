#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - duplicate string to new memory space location
  * @str: char
  * Return: 0
  */

char *_strdup(char *str)
{
	char *n;
	int i;
	int k = 0;

	n = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (n == NULL)
	{
		return (NULL);
	}
	for (k = 0; str[k]; k++)
	{
		n[k] = str[k];
	}
	return (n);
}
