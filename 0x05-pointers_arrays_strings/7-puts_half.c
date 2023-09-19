#include "main.h"
/**
 * puts_half - pointerFunc that print half of a string @str to stdout.
 * @str: string param to be evaluated.
 *
 */

void puts_half(char *str)
{
    int size, length_of_the_string;
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }
    length_of_the_string = len;

    size = length_of_the_string / 2;
    do
    {
        _putchar(str[size]);
        size++;
    } while (size < 10);
    _putchar('\n');
}