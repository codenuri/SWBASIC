#include <stdio.h>

int main()
{
    int count = 0;

    while ( count < 10 )
    {
        printf("hello\n");
        //count = count + 1;
        ++count;
    }

    /*
    if ( count < 10 )
    {
        printf("hello\n");
        count = count + 1;
    }
    */
    return 0;
}
