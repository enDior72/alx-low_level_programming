#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* _putchar - Write @c to std=o */
int _putchar(char c);

/* _isupper - check if @c is A-Z */
int _isupper(int c);

/* _isdigit - check if @c is digit */
int _isdigit(int c);

/* mul - multiply two integers */
int mul(int a, int b);

/* print_numbers - Print num [0-9], then \n && return void */
void print_numbers(void);

/*  print_most_numbers - Print the numbers [0-9], except [2 && 4] */
void print_most_numbers(void);

/* more_numbers - Print numbers [0-14], repest 10x */
void more_numbers(void);

/* print_line - Print straight line using putchar of n size */
void print_line(int n);

/* print_diagonal - print a straight line using putchar of @n size */
void print_diagonal(int n);

/* print_square - Print square of n size */
void print_square(int n);

/* print_triangle - print backwards triangle of n @size */
void print_triangle(int size);

/* print_number - print any integer using putchar */
void print_number(int n);

#endif /* MAIN_H */
