#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf ( "%[^\n]s", str ) ; 
    int hash[1000]={0};
    strlwr(str);
    for(int i=0;i<strlen(str);i++){
        int c = str[i];
        hash[c]++;
    }
    int count=0;
    for(int i = 0; i < strlen(str); i++){
        if(count==0){
            if(hash[str[i]] == 1){
                printf("%c ",str[i]);
                count++;

            }
        }
    }
}