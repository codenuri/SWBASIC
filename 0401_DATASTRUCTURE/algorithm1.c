#include <stdio.h>

int main()
{
    int i = 0;

    int x[10] = { 50, 30, 70, 20, 90,
                  80, 40, 60, 100, 10}; // 입력된 데이타


    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", x[i]);
    }

    return 0;
}
