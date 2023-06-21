#include <stdio.h>
/**
 * main - all possible combinations
 * Return: Always 0
 */
int main(void)
{
	int ones = '0';
	int tems = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; hundreds <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) || (tens == hundreds) ||
							(tens > ones) || (hundreds > tens)))
				{
					putchar(hunreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' && tens == '8'))
					{
						putchar(',');
						putcher(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
