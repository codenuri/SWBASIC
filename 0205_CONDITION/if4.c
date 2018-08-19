#include <stdio.h>

int main()
{
    int n = 0;

    printf("input >> ");

    scanf("%d", &n);

    // 입력된 값이 짝수인지 홀수인지 조사하고 싶다

    if (  n % 2 == 0  )
        printf("even\n");
    else
        printf("odd\n");


    return 0;
}
