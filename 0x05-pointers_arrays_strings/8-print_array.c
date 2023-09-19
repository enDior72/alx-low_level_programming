#include <stdio.h>

/**
 * print_array - pointerFunc that print half of a string @str to stdout.
 * @a: array address to be evaluated.
 * @n: size of array
 */
void print_array(int *a, int n)
{
    int size = 0;
    do
    {
        printf("%d", a[size]);
        size++;
        if (size == n)
            break;
        printf(", ");
    } while (size < n);
    printf("\n");
}