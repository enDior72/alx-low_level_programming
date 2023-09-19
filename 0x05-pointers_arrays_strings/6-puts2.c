#include "main.h"
/**
 * puts2 - pointerFunc that print some string @str to stdout.
 * @str: string param to be evaluated.
 *
 */
void puts2(char *str)
{
    int size = 0;

    do
    {
        _putchar(str[size]);
        size = size + 2;
    } while (size < 10);
    _putchar('\n');
}