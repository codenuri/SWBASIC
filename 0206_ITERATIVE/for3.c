#include <stdio.h>

int main()
{
    int count = 0;

    while ( count < 10 )
    {
        printf("hello\n");
        //...
        //...
        //..

        ++count;   // count = count + 2;
    }



    for ( count = 0; count < 10; ++count )
    {
        printf("hello\n");
    }

    // 사용자가 -1을 입력할때 까지 계속 입력 받고 싶다.
    int n = 0;

    while( n != -1 )
        scanf("%d", &n);

    for ( ; n != -1;  )
        scanf("%d", &n);

    return 0;
}


















//
