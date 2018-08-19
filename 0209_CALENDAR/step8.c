#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30,31,30 };

	while (1)
	{
		int i = 0;
		int month = 2;
		int year = 2016;

		printf("�⵵�� �Է��� �ּ��� >> ");
		scanf("%d", &year);

		printf("���� �Է��� �ּ��� >> ");
		scanf("%d", &month);

		printf("\n");
		printf("\t%d�� %d��\n\n", year, month);

		// 1�� 1���� ����
		int leapCount = (year-1) / 4 - (year-1) / 100 + (year-1) / 400;
		int weekofday = (year + leapCount) % 7;

		printf(" SUN MON TUE WED THU FRI SAT\n");

		// year �⵵�� �����̸� true �ƴϸ� false
		int isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

		if (isLeapYear)
			days[1] += 1;

		// 1�� 1���� �ƴ� month �� 1���� ������ ���ؾ� �Ѵ�.
		for (i = 0; i < month - 1; i++)
		{
			weekofday += days[i];
		}
		weekofday %= 7;

		for (i = 0; i < weekofday; i++)
		{
			printf("    ");
		}

		for (i = 1; i <= days[month - 1]; i++)
		{
			printf("%4d", i);

			if ((i + weekofday) % 7 == 0)
				printf("\n");
		}
		printf("\n\n");
		days[1] = 28;
	}
}