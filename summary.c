#include <stdio.h>

int main()
{
    printf("hello\n");

    int n = 0;
    scanf("%d", &n);

    n = n % 2;

    printf("%d\n", n);

    if ( n % 2 == 0 )
        printf("even\n");

    while( n < 10)
    {
        printf("...");
        ++n;
    }

    int x[3] = { 1,2,3};
    
    return 0;
}
