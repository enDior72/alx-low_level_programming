#include "main.h"

/**
 * more_numbers - print all numbers 0 through 14 ten tiems
 */

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}

		_putchar('\n');

		i++;
	}
}
