#include<stdio.h>
#include<string.h>
int main(){
    char *str="Hello World";
    for(int i=0;i<100;i++){
        if(str[i] == '\0'){
            printf("Length of the string is %d",i);
            break;
        }
    }

}