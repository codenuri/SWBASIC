#include <stdio.h>

int main()
{
    int a = 1;

    // 변수 값을 1증가 하는 방법

    // a = a + 1; // 방법 1
    // a += 1;    // 방법 2.

    //++a;    // 방법 3
    //a++;    // 방법 4

    //int c = ++a; // a를 1증가하고, 증가된값을 c넣기

    int c = a++; // a를 1증가하고, 증가되기 이전값 c넣기


    printf("a = %d, c = %d \n", a, c);

    return 0;
}





























//
