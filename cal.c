#include <stdio.h>

int main()
{
    int days[12] = { 31, 28, 31, 30, 31, 30,
                     31, 31, 30, 31, 30, 31  };
    int i     = 0;
    int month = 1;
    int year = 0;
    scanf("%d", &year);

    int leapCount = (year-1) / 4 - (year-1)/100
                                 + (year-1)/400;

    int weekofday = (year + leapCount) %7;


    printf(" SUN MON TUE WED THU FRI SAT\n");

    for ( i = 0; i < weekofday; i++)
        printf("    ");

    for ( i = 1; i <= days[month-1] ; i++ )
    {
        printf("%4d", i);

        if ( (i + weekofday) % 7 == 0 )
            printf("\n");
    }

    return 0;
}







//printf("input month >> ");
//scanf("%d", &month);
















































//
