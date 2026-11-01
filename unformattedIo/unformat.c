#include <stdio.h>

int main(void){
    char gender;
    printf("Enter your gender (M/F): ");
    // getchar() and the putchar() function are used to read and write a single character from/to the standard input/output.
    gender = getchar();
    printf("Your gender is:");
    putchar(gender);

    return 0;
};