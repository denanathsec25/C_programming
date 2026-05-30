#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);

    int m=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='0'){
            m=i;
            break;
        }
    }
    for(int i=m;str[i]!='\0';i++){
            printf("%c",str[i]);
        }
}