#include <stdio.h>

int main()
{
    int age = 0;

    printf("How old are you ? ");
    scanf("%d", &age);
    printf("You are ");

    if ( age > 10 )
        printf("older than 10 years old\n");
    else
        printf("younger than 10 years old\n");

    /*
    if ( age < 10 )
    {
        printf("younger than 10 years old\n");
    }
    */

    return 0;
}


























//
