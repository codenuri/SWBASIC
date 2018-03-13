#include <stdio.h>

int main()
{
    int n = 20;


    do
    {
        scanf("%d", &n);
    }while ( n < 10);

/*
    // while 문
    n = 0;      // 1회 실행을 위해 변수값 초기화를
                // 조건식이 참이 되도록
    while ( n < 10)
    {
        scanf("%d", &n);
    }
*/


    return 0;
}
