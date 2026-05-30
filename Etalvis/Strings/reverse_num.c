#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    for(int i=strlen(str);i>=0;i--){
        printf("%c",str[i]);
    }
}