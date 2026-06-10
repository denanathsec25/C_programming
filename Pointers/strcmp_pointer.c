#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char str1[100];
    fgets(str,sizeof(str),stdin);
    fgets(str1,sizeof(str1),stdin);
    str[strcspn(str,"\n")]='\0';
    str1[strcspn(str1,"\n")]='\0';

    int len=strlen(str);
    int len1=strlen(str1);

    char *p=str;
    char *q=str1;

    if(len!=len1){
        printf("false\n");
    }

    else{
        int comp=1;
        while(*p!='\0'){
            if(*p!=*q){
                printf("false\n");
                comp=0;
                break;
            }
            p++;
            q++;

        } 
        if(comp==1){
            printf("true\n");
        }  
    }
}