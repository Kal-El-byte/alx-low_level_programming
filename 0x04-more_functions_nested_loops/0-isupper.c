#include "main.h"

/**
 * _isupper - function that checks for uppercase chracters
 * @c: int type number
 * Return: 1 if upppercase, else 0
 */
int _ispper(int c)
{
	if ( c > 64 && c < 91)
		return (1);
	
	return (0);
}
