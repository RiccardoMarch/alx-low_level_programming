#include <stdio.h>
#include <stdbool.h>
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
	int is_leap_year = ((((year % 4) == 0) && ((year % 100) != 0)) || ((year % 400) == 0)) ? true : false;
	int total_days = (is_leap_year == true) ? 366: 365;
	int days_passed = 0;
	int i;

	for (i = 0; i < month; i++) {
		if (i == 1)
			days_passed += (is_leap_year == true) ? 29 : 28;
		else
			days_passed += (((i + 1) % 2) == 0) ? 30 : 31;
	}

	if (is_leap_year == false && month == 2 && day == 60)
		 /*printf("Invalid date: %02d/%02d/%04d\n", month,day - 31, year);*/
	else {
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", (total_days - days_passed));
	}
 }
