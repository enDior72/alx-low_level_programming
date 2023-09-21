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
* _strcat - pointerFunc that concatenates @src && @dest overwriting the '\0'.
* @src: soucre
* @dest: destination
* ref: man strcat
*
* Return: @dest (onSuccess)
*/
char *_strcat(char *dest, char *src)
{
	int i, n, dest_len;

	n = _strlen(src);
	dest_len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
