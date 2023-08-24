#include "main.h"

/**
 * *String_toupper - Change all lowercase to uppercase
 * @str: input parameter
 * Return: strings
 */
void string_toupper(char *str)

{
	int i;

	for (i = 0; str[i] != '\0' i++)
	{
		if (str[i] >= 'n' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
