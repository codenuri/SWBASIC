#include <stdio.h>

int main()
{
    int j = 0;
    int i = 0;

    for ( j = 2; j <= 9; j++ )
    {
        printf("** %d Dan ** \n\n", j);

        for ( i = 1; i <= 9; i++ )
        {
            printf("%d * %d = %d\n", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}
