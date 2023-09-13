#include "main.h"
/**
* _isalpha - check if @c is alphabet
* @c: variable to check if is alphabet
* Return: 1 if c is alphabet fi 0..
*/

/* Function Defination - @_islower */

int _isalpha(int c)
{
	int i;

	i = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		i = 1;
	}
	return (i);
}
