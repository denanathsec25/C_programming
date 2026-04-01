#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[200];
    strcpy(str1,"Welcome to");
    strcpy(str2," IEEE");
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}