#include <stdio.h>

int main()
{
    int year = 0;
    scanf("%d", &year);

    int leapCount = (year-1) / 4 - (year-1)/100
                                 + (year-1)/400;

    int weekofday = (year + leapCount) %7;


    switch( weekofday )
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
