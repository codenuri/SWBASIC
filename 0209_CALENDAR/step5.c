#include <stdio.h>

// step5. 윤년이면 29 일로.

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30,31,30 };

	int month = 2;
	int year = 2016;

	int leapCount = year % 4 - year % 100 + year % 400;
	int weekofday = (year + leapCount) % 7;

	printf(" SUN MON TUE WED THU FRI SAT\n");

	// year 년도가 윤년이면 true 아니면 false
	int isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	if (isLeapYear)
		days[1] += 1;

	for (int i = 0; i < weekofday; i++)
	{
		printf("    ");
	}

	for (int i = 1; i <= days[month - 1]; i++)
	{
		printf("%4d", i);

		if ((i + weekofday) % 7 == 0)
			printf("\n");
	}
	printf("\n");
	days[1] = 28;



	
}