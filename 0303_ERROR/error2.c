#include <stdio.h>

int main()
{
    int n = 0;
    int sum = 0;

    scanf("%d", &n);

    // 1 ~ n 까지의 합을 구하고 싶다.
    int i = 0;
    /*
    for ( i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    */
    /*
    // 짝수의 합을 구하고 싶다.
    for ( i = 1; i <= n; i++)
    {
        if ( i % 2 == 1 )  // 홀수
            continue;

        sum = sum + i;
    }

    */
    for ( i = 2; i <= n; i = i + 2)
    {
        sum = sum + i;
    }


    printf("result : %d\n", sum);



    return 0;
}























//
