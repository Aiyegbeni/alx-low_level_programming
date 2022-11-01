#include "main.h"

/**
 * memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: Array
 * @b: size
 * @n: delimiter
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s != 00 && i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
