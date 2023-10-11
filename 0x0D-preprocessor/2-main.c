#include <stdio.h>

/**
* main - Using Macro __FILE__
*
* Return: Always 0.
*/

int main(void)
{
	char *filename = __FILE__;

	printf("%s\n", filename);
	return (0);
}
