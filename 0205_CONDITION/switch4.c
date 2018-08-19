#include <stdio.h>

int main()
{
    int cmd = 0;
    int a = 0;
    int b = 0;

    scanf("%d", &cmd);
    scanf("%d", &a);
    scanf("%d", &b);

    switch( cmd )
    {
    case 1:
        printf("%d + %d = %d\n", a, b, a + b);
        break;

    case 2:
        printf("%d - %d = %d\n", a, b, a - b);
        break;

    case 3:
        printf("%d * %d = %d\n", a, b, a * b);
        break;

    case 4:
        printf("%d / %d = %d\n", a, b, a / b);
        break;

    default:
        printf("Error\n");
        break;
    }

    return 0;
}




























//
