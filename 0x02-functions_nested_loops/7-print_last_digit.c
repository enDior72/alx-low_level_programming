#include "main.h"
/**
 * print_last_digit - extract last number of a variable
 * @c: variable where we extract last number
 * Return: i if succesful
 */

int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
	c = c * -1;
	c = c + 48;
	_putchar(c);
	return (c - '0');
}
