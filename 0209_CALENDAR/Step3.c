#include <stdio.h>

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30,31,30 };

	int month = 2;
	int weekofday = 2; // 1���� ���� �����ΰ� ? 
					   // 0 : ��, 1 : ��, 2 : ȭ

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