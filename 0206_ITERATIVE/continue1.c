#include <stdio.h>

int main()
{
    int sum = 0;
    int n = 0;

    while ( 1 )
    {
        scanf("%d", &n);

        if ( n == -1 )
            break;

        if ( n % 2 == 0 )   // 짝수.
            continue;

        sum = sum + n;      // 홀수만 더하기
    }

    printf("result : %d\n", sum );


    return 0;
}
