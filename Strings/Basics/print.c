#include<stdio.h>
int main(){// Type 1
    printf("%s","You have to dream before your dreams can come True. \
        --- Dr.A.P.J Abdul Kalam");
        // Type 2
    printf("%s","\nYou have to dream before your dreams can come True. "
        "--- Dr.A.P.J Abdul Kalam");

    printf("\n--------------------------Another type---------------------------------------");

    char *ptr = "Hello World";
    printf("\n%s",ptr);
    printf("\n---------------------------Specific number of character--------------------------------------");
    char *ptrs = "Hello World";
    printf("\n%.5s",ptrs);
}