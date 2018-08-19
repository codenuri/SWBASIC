#include <stdio.h>

// 년도를 입력받아서
// 1월 1일이 요일을 반환하는 함수
int getWeekOfDay( int year )
{
    int lastYear = year - 1;
	int leapCount = lastYear / 4 - lastYear / 100 + lastYear / 400;
	int weekofday = (year + leapCount) % 7;

    return weekofday;
}


int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30,
                     31, 31, 30, 31, 30, 31};

	int month = 1;
	int year = 0;

	printf("year >> ");
	scanf("%d", &year);

    int weekofday = getWeekOfDay(year);

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

	return 0;
}
