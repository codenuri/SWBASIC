#include <stdio.h>

int main()
{
	int i = 0;

	printf(" SUN MON TUE WED THU FRI SAT\n");

	for (i = 1; i <= 31; i++)
	{
		printf("%4d", i);

		if (i % 7 == 0)
			printf("\n");
	}

	return 0;
}


















































//
