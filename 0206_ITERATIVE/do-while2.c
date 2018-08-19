#include <stdio.h>

int main()
{
    int n = 20;

    // scanf("%d", &n);

    while ( n > 10)
    {
        scanf("%d", &n);
    }

    do
    {
        scanf("%d", &n);
    }while ( n > 10);


    return 0;
}
