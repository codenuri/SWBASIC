#include <stdio.h>

int main()
{
    int n = 0;
    int sum = 0;

    while( 1 )
    {
        scanf("%d", &n);

        if ( n == -1 )
            break;


        if ( n % 2 == 1 )
            continue;

        sum = sum + n;

        /*
        if ( n % 2 == 0)
        {
            sum = sum + n;
        }
        */
    }

    printf("%d\n", sum);


    return 0;
}






/*
int main()
{
    int n = 0;

    while( 1 )
    {
        printf("test\n");

        if ( n == 0 )
            break; // {} 탈출해 달라.
    }

    return 0;
}

*/
