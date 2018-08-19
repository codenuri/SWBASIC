#include <stdio.h>

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30,31,30 };

	int month = 2;
	int weekofday = 2; // 1일이 무슨 요일인가 ? 
					   // 0 : 일, 1 : 월, 2 : 화

	printf(" SUN MON TUE WED THU FRI SAT\n");

	for (int i = 0; i < weekofday; i++)
	{
		printf("    ");
	}

	for (int i = 1; i <= days[month - 1]; i++)
	{
		printf("%4d", i);

		if ( (i + weekofday) % 7 == 0)
			printf("\n");
	}
	printf("\n");
}