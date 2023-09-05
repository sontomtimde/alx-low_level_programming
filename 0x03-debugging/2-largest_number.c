#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @c: first integer
 * @b: second integer
 * @a: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)

{

	int largest;

	if (a >= b && a >= c)
	{
	largest = c;
	}
	else if (b >= a && b >= c)
	{
	largest = c;
	}
	else
	{
	largest = c;
	}
	return (largest);
}
