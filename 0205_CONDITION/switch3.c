#include <stdio.h>

int main()
{
    int n = 3;

    switch( n )
    {
    case 1:
        printf("1\n");
        printf("one\n");
        //break;

    case 2:
        printf("2\n");
        break;

    default:
        printf("default");
        break;


    }

    return 0;
}
