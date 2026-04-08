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
    for(int i=97;i<124;i++){
        if(hash[i]>0){
            char str1= i;
            printf("%c %d\n",str1,hash[i]);

        }
    }
}