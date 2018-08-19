#include <stdio.h>

int main()
{
    int n = 0;
    int total_even = 0;
    int total_odd = 0;
    int i = 0;

    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        if ( i % 2 == 0 )
            total_even += i;
        else
            total_odd += i;
    }
    printf("even : %d\n", total_even);
    printf("odd : %d\n", total_odd);

    return 0;
}
