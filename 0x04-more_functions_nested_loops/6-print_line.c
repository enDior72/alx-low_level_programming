#include "main.h"

/**
 * print_line - print a straight line using putchar of @n size
 * @n: size of line
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
