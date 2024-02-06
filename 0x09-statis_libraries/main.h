#ifndef _MAIN_H_
#define _MAIN_H_

/* _putchar - write @c to std=o & return @c on success */
char _putchar(char c);

/* _islower - check if @c is lowercase, return 1 if true 0 otherwise */
int _islower(int c);

/* _isalpha - check if @c is [A-Z][a-z], return 1 if true 0 otherwise  */
int _isalpha(int c);

/* _abs - computes the absolute value of an integer */
int _abs(int n);

/* _isupper - check if @c is A-Z */
int _isupper(int c);

/* _isdigit - check if @c is digit */
int _isdigit(int c);

/* _strlen - pointerFunc that evaluate && return the lenght of *(@s) */
int _strlen(char *s);

/* _puts - pointerFunc that print *(@str) to stdout */
void _puts(char *s);

/* _strcpy - pointerFunc that copies @src to @dest including the '\0'. */
char *_strcpy(char *dest, char *src);

/* _atoi - pointerFunc that convert *s string to an integer. */
int _atoi(char *s);

/* _strcat - pointerFunc that concatenates */
/* @src && @dest overwirting the '\0'. */
char *_strcat(char *dest, char *src);

/* _strncat - pointerFunc that concatenates */
/* @src && @dest overwriting the '\0' */
char *_strncat(char *dest, char *src, int n);

/* _strncpy - pointerFunc that copies @src to @dest including the '\0' */
char *_strncpy(char *dest, char *src, int n);

/* _strcmp - pointerFunc that compoares two strings @s1 && @s2 */
int _strcmp(char *s1, char *s2);

/* _strncmp - pointerFunc that compoares two strings @s1 && @s2  incl. '/0' */
int _strncmp(char *s1, char *s2, int n);

/* _memset - pointerFunc that fills memory with a constant byte */
/* @s: the buffer  */
/* @b: the char to copy  */
/* @n: the number of characters  */
char *_memset(char *s, char b, unsigned int n);

/* _memcpy - pointerFunc that copies memory area */
/* @dest: the dest buffer  */
/* @src: the src to copy  */
/* @n: the number of characters to copy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* _strchr - pointerFunc that locates a character in a string */
char *_strchr(char *s, char c);

/* _strspn - pointerFunc that gets the length of a prefix substring.*/
unsigned int _strspn(char *s, char *accept);

/* _strpbrk- pointerFunc that searches a string for any of a set of bytes*/
char *_strpbrk(char *s, char *accept);

/* _strstr - pointerFunc that locates a substring */
char *_strstr(char *haystack, char *needle);

#endif /* Check if header file _MAIN_H_ already exit */
