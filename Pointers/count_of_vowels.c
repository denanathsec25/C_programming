#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    char *p=str;
    int vowels=0;
    while(*p!='\0'){
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='I'||*p=='E'||*p=='O'||*p=='U')vowels+=1;
        p++;

    }
    printf("%d",vowels);
}