#include<stdio.h>
#include<string.h>
int main(){
    char s[]="GATE2011";
    char *p=s;
    printf("%s",p + s[3]-s[1]);
    return 0;
}