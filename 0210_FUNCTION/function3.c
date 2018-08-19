#include <stdio.h>

int sub(int a, int b);  // 함수의 선언(declaration)
int add(int a, int b);

int main()
{
    int n1 = add(2,1);  // 함수 호출(call)
    int n2 = sub(2,1);

    return 0;
}

int sub(int a, int b)   // 함수 구현, 정의
{
    return a - b;
}

int add(int a, int b)
{
    return a + b;
}
