#include <stdio.h>

int main()
{
    int age = 0;

    printf("How old are you ? ");

    scanf("%d", &age);

/*
    if ( age > 10 )
        printf("You are older than 10 years old\n");
        printf("You not Baby\n");

*/
    if ( age > 10 ) {
        printf("You are older than 10 years old\n");
        printf("You not Baby\n");
    }



    /*
    if ( age > 10 )
        printf("You are older than 10 years old\n");
    else if ( age > 5)
        printf("You are older than 5 years old\n");
    else
        printf("You are younger than 5 years old\n");
        */


    return 0;
}








//
