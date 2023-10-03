/**
* _strlen - pointerFunc that evaluate the lenght of @s
* @s: string param to be evaluated.
*
* Return: @len (onSuccess)
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
* _strncat - pointerFunc that concatenates @src && @dest including the '\0'.
* @src: soucre
* @dest: destination
* @n: array size/lenght to be pass
* ref: man strncat
*
* Return: @dest (onSuccess)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
