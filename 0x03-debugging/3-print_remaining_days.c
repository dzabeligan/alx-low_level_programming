#include "main.h"
#include <stdio.h>

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int total_days = 365;
	int days_upto_february = 59;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month > 2 && day >= 60)
			day++;

		total_days++;
		days_upto_february++;
	}

	if (month == 2 && day > days_upto_february)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		return;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", total_days - day);
}
