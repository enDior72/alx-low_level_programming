#include "main.h"
/**
* print_sign - check if @c is sign
* @c: variable
* Return: +, 1 if: (n > @c) return
* elif: (n == @c) return 0, 0
* fi: (n < @c) return  -, 0
*/


/* Function Defination - @_islower */

int print_sign(int c)
{
	int i;

	if (c > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (c < 0)
	{
		_putchar('-');
		i = -1;
	}
	else
	{
		_putchar('0');
		i = 0;
	}
	return (i);
}
