#include<stdio.h>

int main()
    {
        char str[10] = "My Nepal";

        printf("%s",str);
        printf("\n%10s",str);
        printf("\n%10.6s",str); // My Nepal => My Nep - 1 2 3 4 5 6 = My Nep => 10 - 6 = 4 = 0 0 0 0 My Nep
        printf("\n%.4s",str); // My Nepal => My N - 1 2 3 4 = 10.4 = 6 = My0N000000
        printf("\n%-10.6s",str);
        printf("\n4s",str);

        return 0; 
    };