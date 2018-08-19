#include <stdio.h>

int add( int a, int b )
{
//    int c = a + b;
//    return c;

    return a + b;
}

int main()
{
    int n = 0;

    //int c = add(1, 2);
    n = add(1,2);

    printf("result = %d\n", n);

    return 0;
}
