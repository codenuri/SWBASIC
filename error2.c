#include <stdio.h>

int main()
{
    int i = 0;
    int s = 0;
    int n = 0;

    scanf("%d", &n);

/*
    // 1 ~ n 까지의 짝수의 합.
    for ( i = 1; i <= n; i++)
    {
        if ( i % 2 == 0)
            s = s + i;
    }
*/
    for ( i = 2; i <= n; i = i + 2)
    {
        s = s + i;
    }


    printf("sum : %d\n", s);

    return 0;
}
























//
