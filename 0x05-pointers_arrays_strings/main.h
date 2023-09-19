#ifndef MAIN_H
#define MAIN_H

/* reset_to_98 - pointerFunc that update value of *(@n) */
void reset_to_98(int *n);

/* swap_int - pointerFunc that update two int value *(@a && @b) */
void swap_int(int *a, int *b);

/* _strlen - pointerFunc that evaluate && return the lenght of *(@s) */
int _strlen(char *s);

/* _puts - pointerFunc that print *(@str) to stdout */
void _puts(char *str);

/* _putchar - write @c to stdout & return @c on success */
char _putchar(char c);

/* print_rev - pointerFunc that print @s to stdout in reverse order */
void print_rev(char *s);

/* rev_string - pointerFunc that reverse the order of @s */
void rev_string(char *s);

/* puts2 - pointerFunc that print some string @str to stdout. */
void puts2(char *str);

/* puts_half - pointerFunc that prints half of a string @str */
void puts_half(char *str);

/* print_array - pointerFunc that prints @n elements of an array of integers */
void print_array(int *a, int n);

/* _strcpy - pointerFunc that copies @src to @dest including the '\0'. */
char *_strcpy(char *dest, char *src);

/* _atoi - pointerFunc that convert *s string to an integer. */
int _atoi(char *s);

#endif /* MAIN_H */
