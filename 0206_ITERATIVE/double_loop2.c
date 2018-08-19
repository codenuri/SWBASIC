#include <stdio.h>

int main()
{
    int y = 0;
    int x = 0;

    for ( y = 0; y < 10; ++y )
    {
        for ( x = 10-y; x < 10; ++x )
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// **********
// *********
// ********
// *******
