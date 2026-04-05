#include<stdio.h>
#include<string.h>
int main(){
    char *fruits[]={"2 Oranges","3 Apples","4 Bananas"};
    if(strcmp(fruits[1],fruits[2])<0){
        printf("%s is less than %s",fruits[1],fruits[2]);
    }
    else if(strcmp(fruits[1],fruits[2])>0){
        printf("%s is greater than %s",fruits[1],fruits[2]);
    }
    else{
        printf("%s is equal to %s",fruits[1],fruits[2]);
    }
     return 0;
    }