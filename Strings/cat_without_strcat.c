#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char str1[100];
    fgets(str,sizeof(str),stdin);
    fgets(str1,sizeof(str1),stdin);
    str[strcspn(str, "\n")] = '\0';
    str1[strcspn(str1, "\n")] = '\0';
    printf("%s %s",str,str1);

}