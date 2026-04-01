#include<stdio.h>
int main(){
    
    // Printf only stores 1st word does not store 2nd word so gets is used.
    printf("\n-------------------------------");
    char b[10];
    printf("\nEnter the string:\n");
    gets(b);
    printf("%s",b);
    printf("\n---------------Set number of characters to store-------------------\n");
    char c[10];
    printf("Enter the String:\n");
    scanf("%9s",&c);
    printf("%s",c);
}

