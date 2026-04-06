#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    int count =0;
    for(int i=0;i<len;i++){
        if((i==0 && str[i] != ' ' && str[i] != '\n') || (str[i-1] == ' '  && str[i] != ' ' && str[i] != '\n')){
            count++;
        }
        
    }
    printf("Number of words: %d", count);
}