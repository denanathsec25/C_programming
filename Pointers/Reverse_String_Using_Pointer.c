#include<stdio.h>
#include<string.h>
int mystrlen(char *);
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int len = mystrlen(str);
    for(int i=len;i>=0;i--){
        printf("%c",str[i]);
    }
}
int mystrlen(char *str1){
    char *p=str1;
    int count=0;
    while(*p!='\0'){
        count++;
        p++;
    }
    return count;
}