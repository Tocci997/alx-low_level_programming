#include <stdio.h>
/**
 * main - entry point
 * Return: 0 indicates successful execution
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n < 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(0);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
