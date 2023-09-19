#include "main.h"
/**
 * rev_string - pointerFunc that reverse the order of @s.
 * @s: *string param to be pass.
 *
 */
void rev_string(char *s)
{
    int size = 10;

    do
    {
        _putchar(s[size]);
        size--;
    } while (0 <= size);
    _putchar('\n');
}