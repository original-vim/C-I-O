#include <stdio.h>

int main(void){
    // char gender;
    // printf("Enter your gender (M/F): ");
    // // getchar() and the putchar() function are used to read and write a single character from/to the standard input/output.
    // gender = getchar();
    // printf("Your gender is:");
    // putchar(gender);

    // char ch1,ch2;
    // printf("Enter hte 1st character: ");
    // ch1 = getch();
    // printf("Enter the 2nd character: ");
    // ch2 = getche();
    // printf("\n1st character: ");
    // putch(ch1);
    // printf("\n2nd character: ");
    // putch(ch2);

    char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("Your name is: ");
    puts(name);

    return 0;
};