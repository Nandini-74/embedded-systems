#include <stdio.h>

/*
------------------------------------------------------
Program : Escape Sequence Explorer
Author  : Nandu
Purpose : Demonstrate commonly used escape sequences
------------------------------------------------------
*/

int main()
{
    printf("=========== ESCAPE SEQUENCE DEMO ===========\n");

    // New Line
    printf("\n1. New Line (\\n)\n");
    printf("Hello\nEmbedded\nEngineer\n");

    // Horizontal Tab
    printf("\n2. Horizontal Tab (\\t)\n");
    printf("Name\t: Nandu\n");
    printf("Branch\t: ECE\n");
    printf("Goal\t: Embedded Engineer\n");

    // Backspace
    printf("\n3. Backspace (\\b)\n");
    printf("ABC\bD\n");     // Output may appear as ABD

    // Carriage Return
    printf("\n4. Carriage Return (\\r)\n");
    printf("Hello\rBye\n"); // Terminal behavior may vary

    // Vertical Tab
    printf("\n5. Vertical Tab (\\v)\n");
    printf("Line1\vLine2\n"); // Many terminals ignore this

    // Alert/Bell
    printf("\n6. Alert (\\a)\n");
    printf("Bell Sound\a\n");

    // Single Quote
    printf("\n7. Single Quote (\\')\n");
    printf("\'Embedded Systems\'\n");

    // Double Quote
    printf("\n8. Double Quote (\\\")\n");
    printf("\"Keep Learning\"\n");

    // Backslash
    printf("\n9. Backslash (\\\\)\n");
    printf("C:\\Embedded\\Projects\\Day4\n");

    // Null Character
    printf("\n10. Null Character (\\0)\n");
    printf("ABC\0DEF\n");
    printf("Only 'ABC' is printed because \\0 marks the end of the string.\n");

    printf("\n===========================================\n");

    return 0;
}
