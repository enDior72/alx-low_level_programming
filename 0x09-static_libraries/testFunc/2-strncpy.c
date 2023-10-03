/**
 * _strncpy - pointerFunc that copies @src to @dest including the '\0'
 * @src: soucre
 * @dest: destination
 * @n: array size/lenght to be pass
 * ref: man strncpy
 *
 * Return: dest (onSuccess)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
