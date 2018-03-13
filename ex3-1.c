#include <stdio.h>
int main()
{
    int num = 10;
    num = 20;
    printf("num : %d\n", num);
    printf("num : %p\n", &num); // 메모리 주소.
    scanf("%d", &num);
    printf("%d\n", num);
    return 0;
}
