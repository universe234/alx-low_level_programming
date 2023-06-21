#include <stdio.h>
/**
 * main - Entry point where the project begins
 * Return Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'c') && c <= 'z')
				putchar (c);
			c++;
		}
	putchar('\n');
	return (0);
}
