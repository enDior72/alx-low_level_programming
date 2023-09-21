/**
* string_toupper - changes all lowercase letters of a string to uppercase
*
* @str: the  string to convert
*
* Return: a pointer to the converted string
*/

char *string_toupper(char *str)
{
	for (i = 0; str[i]; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}
