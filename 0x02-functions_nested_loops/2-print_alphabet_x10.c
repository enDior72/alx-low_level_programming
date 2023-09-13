#include "main.h"
/**
* print_alphabet_x10 - Call _putchar function to print @abc to stdout
*
* Return: Void.
*/

/**
* Function Defination
* @print_alphabet_10x
*/
void print_alphabet_x10(void)
{
	char abc;
	int i = 1;

	do {
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
		i++;
	} while (i <= 10);
}
