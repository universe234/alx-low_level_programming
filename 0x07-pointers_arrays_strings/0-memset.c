#include "main.h"
/**
 * _memset - to assign a specific value to a memory block
 * @s: initial memory address to be filled
 * @b: said value to be desired
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
