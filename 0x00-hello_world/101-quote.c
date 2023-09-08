#include <stdio.h>
#include <unistd.h>

/**
* main - Output when main() is call in C
*
* Write - Writing to std_o in C
*
* Return: Always Return  1 (Success)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
