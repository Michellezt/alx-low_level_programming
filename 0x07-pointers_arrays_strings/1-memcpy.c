#include "main.h"

/**
  * *_memcpy - unction that copies memory area
  * @dest: pointer destination where content is copied
  * @src: pointer source to be copied
  * @n: number of bytes
  * Return: destination array
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
