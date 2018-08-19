#include <stdio.h>

int main()
{
    int age = 25;

    // 나이가 12 ~ 18 인지 조사하고 싶다.


    //if ( age >= 12 || age <= 18 )

    if ( ( age >= 12 )  && ( age <= 18 ) )
        printf("true\n");

    else
        printf("false\n");


    return 0;
}
