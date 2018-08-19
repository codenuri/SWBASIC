#include <stdio.h>

int main()
{
    int i = 0;
    int n = 0;

    scanf("%d", &n);

/*
    // n의 약수를 출력하고 싶다.
    for ( i = 1; i <= n; i++ )
    {
        if ( n % i == 0 )
            printf("%d\n", i);
    }
*/

    for ( i = 1; i <= n/2; i++ )
    {
        if ( n % i == 0 )
            printf("%d\n", i);
    }

    printf("%d\n", n); // 10

    return 0;
}
