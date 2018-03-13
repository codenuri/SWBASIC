#include <stdio.h>

int main()
{
    int age = 25;

    // 10 ~ 20 일때를 조사하고 싶다.
    if ( (age >= 10) &&  (age <= 20) )
        printf("true\n");
    else
        printf("false\n");

    // 짝수 조사.
    // 3 / 2 => 몫 1  나머지 1
    // 4 / 2 => 몫 2  나머지 0

    if ( age % 2 == 0 )
        printf("even\n");
    else
        printf("odd\n");
    return 0;
}






































//
