#include<stdio.h>
int main(){
    char str[51];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i=0;str[i]!='\0';i++){
        if(!(str[i] >= '0' && str[i] <= '9')){
            printf("Invalid");
            break;
        }
    }

    printf("Valid");
}