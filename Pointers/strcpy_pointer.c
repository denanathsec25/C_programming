#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char cpy[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    char *p=str;
    char *q=cpy;
    for(p=&str[0];*p!='\0';p++){
        *q=*p;
        q++;
    }
    *q='\0';
    printf("%s\n",cpy);
}