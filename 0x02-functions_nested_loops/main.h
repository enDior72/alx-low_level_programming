#ifndef MAIN_H_
#define MAIN_H_

/**
* main - Functions Declaration
* @c: argument
* Return: (@c) on Success else (void)
*/

/* _putchar - write @c to std=o & return @c on success */
char _putchar (char c);

/* print_alphabet - print @c & return void */
void print_alphabet(void);

/* print_alphabet_x10 - print @c_x10 & return void */
void print_alphabet_x10(void);

/* _islower - check if @c is lowercase, return 1 if true 0 otherwise */
int _islower(int c);

/* _isalpha - check if @c is [A-Z][a-z], return 1 if true 0 otherwise  */
int _isalpha(int c);

/* print_sign - print sign, */
/* if: (n > @c) return +, 1, */
/* elif: (n == @c) return 0, 0 */
/* fi: (n < @c) return  -, 0 */
int print_sign(int n);

/* _abs - computes the absolute value of an integer */
int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void jack_bauer(void);

int add(int, int);

void print_to_98(int n);

void times_table(void);

void print_times_table(int n);

#endif /* Check if header file _MAIN_H_ already exit */
