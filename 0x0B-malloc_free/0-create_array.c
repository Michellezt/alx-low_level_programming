#include "main.h"
#include <stdlib.h>

/**
  * *create_array - create an array of chars and initializes with specific char
  * @size: size of array
  * @c: char to assign
  * Return: pointer to array or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
