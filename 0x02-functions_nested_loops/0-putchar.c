#include "main.h"
/**
* main - Call _putchar function to print @c to stdout
*
* Return: On success 0 else -1.
*/
int main(void)
{
	char a[] = "_putchar";
	int b = 0;

	do {
		_putchar(a[b]);
		b++;
	} while (b < 7);
	_putchar('\n');
	return (0);
}
