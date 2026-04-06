#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char str1[100];
    fgets(str,sizeof(str),stdin);
    fgets(str1,sizeof(str1),stdin);
    printf("%s%s",str,str1);

}