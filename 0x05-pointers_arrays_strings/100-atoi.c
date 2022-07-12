# include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int sign = 1, resp = 0, firstname;

	for (firstname = 0; !(s[firstname] >= 48 && s[firstname] <= 57); firstname++)
	{
		if (s[firstname] == '-')
		{
			sign *= -1;
		}
	}

	for (int i = firstname; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

