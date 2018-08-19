#include <stdio.h>


// 검색 값 :  50   90     100
// 배열 :     1     5      9
// 트리 :     1     3      4


int main()
{
    int score[10] = {0};

    int i = 0;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &score[i]);
    }




    int n = 0;
    scanf("%d", &n);

    for ( i = 0; i < 10; i++)
    {
        if ( n == score[i])
        {
            printf("found\n");
            break;
        }
    }



    return 0;
}
