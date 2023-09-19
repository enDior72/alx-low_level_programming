#include "main.h"
/**
 * print_rev - pointerFunc that print @s to stdout in reverse order.
 * @s: *string param to be pass.
 *
 */
void print_rev(char *s)
{
    int size = 65;

    do
    {
        _putchar(s[size]);
        size--;
    } while (0 <= size);
    _putchar('\n');
}