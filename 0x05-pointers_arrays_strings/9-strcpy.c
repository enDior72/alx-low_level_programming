/**
 * _strcpy - pointerFunc that copies @src to @dest including the '\0'.
 * @src: soucre
 * @dest: destination
 * @ref: man strcpy
 *
 * Return: @dest (onSuccess)
 */

char *_strcpy(char *dest, char *src)
{
    int i;
    int len = 0;

    while (src[len] != '\0')
    {
        len++;
    }
    for (i = 0; i < len && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < len; i++)
        dest[i] = '\0';

    return dest;
}