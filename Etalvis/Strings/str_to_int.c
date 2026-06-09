#include<Stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[50];
    int num;
    fgets(str,sizeof(str),stdin);
    num = atoi(str);
    printf("%d",num);
}