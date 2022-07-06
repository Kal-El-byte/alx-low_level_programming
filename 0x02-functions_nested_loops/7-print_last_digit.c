#include "main.h"

/**
 * print _last_digit - prnts the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{

n = n >= 0 ? n : n * -1;
int last = n % 10;
_putchar('0' + last);

return (last);
  
}
