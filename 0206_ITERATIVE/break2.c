#include <stdio.h>

int main()
{
    int sum = 0;
    int n = 0;

    while ( 1 )
    {
        scanf("%d", &n); // -1을 입력했을때

        if ( n == -1 )
            break;

        sum = sum + n;
    }

    printf("result : %d\n", sum );


    return 0;
}
