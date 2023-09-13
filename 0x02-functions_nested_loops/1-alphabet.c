#include "main.h"
/**
* print_alphabet - Call _putchar function to print @abc to stdout
*
* Return: Void.
*/

void print_alphabet(void)
{
	char abc = 'a';

	do {
		_putchar(abc);
		abc++;
	} while (abc <= 'z');
	_putchar('\n');
}
