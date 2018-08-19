#include <stdio.h>


int main()
{
	int year = 401;

	int weekofday = 1;

	int y = year - 1;

	int leapCount = (y / 4) - (y / 100) + (y / 400);
	
	weekofday = (year + leapCount) % 7;
	
	switch (weekofday)
	{
	case 0: printf("SUN\n"); break;
	case 1: printf("MON\n"); break;
	case 2: printf("TUE\n"); break;
	case 3: printf("WED\n"); break;
	case 4: printf("THU\n"); break;
	case 5: printf("FRI\n"); break;
	case 6: printf("SAT\n"); break;
	}

	return 0;
}



/*
int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30,31,30 };

	int month = 2;
	int year = 2018;

	int leapCount = year % 4 - year % 100 + year % 400;

	int weekofday = (year + leapCount) % 7;

	printf(" SUN MON TUE WED THU FRI SAT\n");

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
}
*/