#include <stdio.h>

int main()
{
    int num = 10;   // 4바이트, 정수를보관할 메모리
                    // 이름 num
    //num = 20;
    //&num; // 주소.

    printf("value : %d\n", num); // 메모리의 값
    printf("value : %p\n", &num);// 메모리의 주소

    return 0;
}
