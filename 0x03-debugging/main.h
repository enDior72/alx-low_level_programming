#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/* positive_or_negative - check if @i is <=> 0 */
void positive_or_negative(int i);

/* largest_number - check if (@a,@b,@c) is largest number */
int largest_number(int a, int b, int c);

/* convert_day - converts day of month to day of year, without accounting
* for leap year
*/
int convert_day(int month, int day);

/* print_remaining_days - take date & print nums of days left
* taking leap year into account 
*/
void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
