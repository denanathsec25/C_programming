#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[100];
    scanf ( "%[^\n]", str ) ; 
    int hash[1000]={0};
    strlwr(str);


    for(int i=0;i<strlen(str);i++){
        hash[str[i]]++;
    }

    for(int i = 0; i < strlen(str); i++){
         if(hash[str[i]] == 1){
            printf("%c ",str[i]);
            break;
        }       
    }
}