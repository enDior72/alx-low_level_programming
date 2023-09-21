/**
* _strcmp - pointerFunc that compoares two strings @s1 && @s2
* @s1: first string
* @s2: second string
* ref: man strcmp
*
* Return: c1 - c2
*/
int _strcmp(char *s1, char *s2)
{
	unsigned char *p1 = (unsigned char *)s1;
	unsigned char *p2 = (unsigned char *)s2;
	unsigned char c1, c2;

	do {
		c1 = *p1++;
		c2 = *p2++;
		if (c1 == '\0')
			return (c1 - c2);
	} while (c1 == c2);

	return (c1 - c2);
}
