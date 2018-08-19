#include <stdio.h>

int main()
{
    int count = 0;  // 변수 선언(만드는것, 메모리 할당)

    //count = 10;     // 변수 사용


    for ( count = 0; count < 10; ++count )
    {
        printf("hello\n");
    }

    for ( ; ; )
    //for ( ; 1; )        // while (1 )
    {
        printf("hello\n");
        ++count;
    }


    return 0;
}
