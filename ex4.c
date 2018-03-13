#include <stdio.h>

int main()
{
    int a = 5;

    //int b = a * 5; // 8번키
    //int b = a / 2; // ? 키보드
    int b = a % 2; // 5 키보드   1

    // b 자체를 1증가하고 싶다.
    b = b + 1;
    b += 1;     // b = b+1
    ++b;        // b = b + 1
    b++;

    b = 10; // 대입

    b = a == 5; // 비교. 같으면 참(1),
                //       다르면 거짓(0)



    printf("%d\n", b);

    return 0;
}
