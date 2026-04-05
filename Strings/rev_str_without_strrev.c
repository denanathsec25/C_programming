#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
}