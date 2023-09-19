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
		len++
	}
	return (len);
}
