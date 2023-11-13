#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
