#include "main.h"
/**
 * _puts - pointerFunc that print *(@str) to stdout.
 * @str: string param to be evaluated.
 *
 */
void _puts(char *str)
{
    int size = 0;

    do
    {
        _putchar(str[size]);
        size++;
    } while (size < 65);
    _putchar('\n');
}