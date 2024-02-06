#include "main.h"
/**
* _islower - check if @c is lowercase
* @c: variable to check if is lowercase
* Return: 1 if c is lowercase fi 0..
*/

/* Function Defination - @_islower */

int _islower(int c)
{
	int i;

	i = 0;

	if (c >= 'a' && c <= 'z')
	{
		i = 1;
	}
	return (i);
}
