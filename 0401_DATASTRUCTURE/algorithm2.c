#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    // a하고 b의 값을 바꾸고 싶다.
    //a = b; // a 가 20
    //b = a; // b 도 20

    int temp = a;
    a = b;
    b = temp;

    printf("a = %d\n", a);  // 10   20
    printf("b = %d\n", b);  // 20   10

    return 0;
}
