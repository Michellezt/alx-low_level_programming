#include <stdio.h>
#include "main.h"

/**
  * main - takes a date and prints how many days are left in the year, taking
  * leap years into account
  * Return: 0
  */

int main(void)
{
	int month;
	int day;
	int year;

	month = 4;
	day = 01;
	year = 1997;

	printf("Date: %02d/%02d/%04d\n", month, day, year);
	printf("Day_of_the_year: %02d\n", day);
	printf("Remaining_days: %02d\n", 366 - day);

	return (0);
}
