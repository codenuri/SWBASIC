#include <stdio.h>   // C 표준 헤더
#include <windows.h> // windows os 전용 헤더

int main()
{
    printf("hello\n");

    MessageBoxA( 0, "hello", "aa", 0);

    return 0;
}
