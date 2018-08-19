#include <stdio.h>

int main()
{
    int num = 10;

    printf("hello\n");

//    printf(10); // error
//    printf("10"); // ok
//    printf(num); // error
//    printf("num"); // num 의 값을 출력이 아니고 "num" 출력

    //printf("%d", num);

    printf("value : %d\n", num);
    printf("value : %4d\n", num);
    printf("value : %04d\n", num);
    printf("value : %x\n", num);
    printf("value : %f\n", num);

    printf("value : %d %d %d\n", num, num + 1, num + 2);

    return 0;
}






















//
