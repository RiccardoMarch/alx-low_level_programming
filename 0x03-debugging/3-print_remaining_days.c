#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

 void print_remaining_days(int month, int day, int year)
 {
	bool is_leap_year = ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0) ? true : false;
	int total_days = (is_leap_year) ? 366: 365;
	int days_passed = day;
	int i;

	for (i = 1; i < month; i++) {
		if (i == 1)
			days_passed += (is_leap_year) ? 29 : 28;
		else
			days_passed += (((i + 1) % 2) == 0) ? 30 : 31;
	}

	printf("Day of the year: %d\n", days_passed);
	printf("Remaining days: %d\n", (total_days - days_passed));
 }
