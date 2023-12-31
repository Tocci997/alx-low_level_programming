#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, count = 0;
	unsigned long int tab;
	unsigned long int exclusive = n ^ m;

	for (t = 63; t >= 0; t--)
	{
		tab = exclusive >> t;
		if (tab & 1)
		{
			count++;
		}
	}

	return (count);
}
