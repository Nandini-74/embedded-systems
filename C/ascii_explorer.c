#include <stdio.h>

/*
------------------------------------------------------
Program : ASCII Explorer
Purpose : Explore ASCII values and neighboring characters.
------------------------------------------------------
*/

int main()
{
    char ch;

    printf("=========== ASCII EXPLORER ===========\n");

    printf("Enter any character: ");
    scanf("%c", &ch);

    printf("\nCharacter           : %c\n", ch);
    printf("ASCII Value         : %d\n", ch);

    printf("\nPrevious Character  : %c (%d)\n", ch - 1, ch - 1);
    printf("Next Character      : %c (%d)\n", ch + 1, ch + 1);

    return 0;
}
