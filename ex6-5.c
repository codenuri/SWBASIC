#include <stdio.h>

int main()
{
    int y = 0;
    int x = 0;

    for ( y = 0; y < 10; ++y   )
    {
        //for ( x = 0; x < 10; ++x)
        for ( x = 0; x < y; ++x)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
//
// *
// **
































//
