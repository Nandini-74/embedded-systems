#include <stdio.h>

/*
-----------------------------------------
Program : Data Types Demo
Purpose : Demonstrate int, float and char
-----------------------------------------
*/

int main()
{
    int age = 19;
    float cgpa = 9.25;
    char grade = 'A';

    printf("===== DATA TYPES =====\n\n");

    printf("Age   : %d\n", age);
    printf("CGPA  : %.2f\n", cgpa);
    printf("Grade : %c\n", grade);

    return 0;
}
