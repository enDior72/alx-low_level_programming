#include "main.h"
/**
* _isdigit - check if @c is a num (0-9)
* @c: variable checked
* Return: 1 if c is num fi 0..
*/

/* Function Defination - @_isdigit */

int _isdigit(int c)
{
	int i;

	i = 0;

	if (c >= '0' && c <= '9')
	{
		i = 1;
	}
	return (i);
}
